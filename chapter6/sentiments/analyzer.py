import nltk
tScore = 0
class Analyzer():
    """Implements sentiment analysis."""

    def __init__(self, positives, negatives):
        """Initialize Analyzer."""
        file = open("negative-words.txt", "r")
        negatives.append(file.readlines(str.strip("negative-words.txt")))

        file = open("positivewords.txt", "r")
        positives.append(file.readlines(str.strip("positive-words.txt")))
        # TODO



    def analyze(self, text):
        """Analyze text for sentiment, returning its score."""



        if tScore == 0:
            return 0
        if tScore > 0:
            return 1
        if tScore < 0:
            return -1

        # TODO