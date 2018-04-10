import cs50
import sys

key = int(sys.argv[1])

if (len(sys.argv) != 2):
    print("Use the proper number of arguments")

ans = 0
var1 = 0
calc = 0
i = 0

source = cs50.get_string("plaintext: ")

print("ciphertext: ", end="")

count = len(source)

while count > 0:
    if (str.isalpha(source[i]) == False):
        print("{}".format(str(source[i])), end="")

    if (str.isupper(source[i]) == True):
        var1 = (ord(source[i]) - 65)
        calc = (var1 + key) % 26
        ans = calc + 65
        print("{}".format(chr(ans)), end="")


    if (str.islower(source[i]) == True):
        var1 = (ord(source[i]) - 97)
        calc = (var1 + key) % 26
        ans = calc + 97
        print("{}".format(chr(ans)), end="")
    i += 1
    count -= 1
print("")