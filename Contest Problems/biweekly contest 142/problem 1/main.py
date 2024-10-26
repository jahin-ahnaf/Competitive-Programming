class Solution(object):
    def possibleStringCount(self, word):
        """
        :type word: str
        :rtype: int
        """
        count = 1
        a = list(word)
        for i in range(len(a) - 1):
            if (a[i] == a[i + 1]):
                count += 1

        return count
            
        