import cs50
import sys
import random
def playlistMaker():
    if (len(sys.argv) != 2):
        print("Tell us how long you want the playlist to be in min:sec")
        return 0
#return zero is the code I use for an incorrectly entered argument
    dur = sys.argv[1]
    minu1 = int(sys.argv[1][0])
    minu2 = int(sys.argv[1][1])
    sec1 = int(sys.argv[1][3])
    sec2 = int(sys.argv[1][4])
    class songs:
# This sets up the library to contain all three song elements: track name, artist and song duration. The duration of the song is also used in some equations later.
#the three text files are indexed in the same way so that the song, the title and the duration coincide on the same line
        def __init__(self,):
            with open('title.txt') as t :
                self.title = t.read().splitlines()
            with open('artist.txt') as a :
                self.artist = a.read().splitlines()
            with open('length.txt') as l :
                self.length = l.read().splitlines()

    library = songs()
    playlistsongs = []
    q = 0
    totlen = 0
    sminu = 0
    ssec1 = 0
    ssec2 = 0
    totslen = 0

    if len(dur) == 5:
        totlen = setup(totlen, minu1, minu2, sec1, sec2)

        while roomForSongs(totlen):
            s = random.randint(0, len(library.length) - 1)
            totslen = songTime(sminu, ssec1, ssec2, totslen, library, s)
            if not songInList(s, playlistsongs):
                playlistsongs.append(s)
                totlen -= totslen
                playlist(library, q, playlistsongs)
                q += 1
    else:
        print("playlists must be more than 10 minutes")
        return 0


def roomForSongs(totlen):
    if totlen > 60:
        return True
    else:
        return False
def setup(totlen, minu1, minu2, sec1, sec2):
#this function configures the variable needed for an easy math in the total length that the user gives for an entry
        minu1 = minu1 * 60 * 10
        minu2 = minu2 * 60
        totlen = minu1 + minu2 + sec1 + sec2
        return totlen
def songTime(sminu, ssec1, ssec2, totslen, library, s):
#This function sets the duration of each song randomly selected to match the user's duration style
    sminu = int(library.length[s][0])
    ssec1 = int(library.length[s][2])
    ssec2 = int(library.length[s][3])
    sminu = int(sminu * 60)
    totslen = sminu + ssec1 + ssec2
    return(totslen)
def playlist(library, q, playlistsongs):
#This function prints the name of the artist and the duration of each song in the new user playlist
    print(library.title[playlistsongs[q]], end=" by ")
    print(library.artist[playlistsongs[q]], end=" ")
    print(library.length[playlistsongs[q]])
def songInList(s, playlistsongs):
#this function ensures that there are no duplicates in the playlist
    if playlistsongs.count(s) > 0:
        return True


playlistMaker()