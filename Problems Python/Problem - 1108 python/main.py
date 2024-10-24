class Solution(object):
    def defangIPaddr(self, address):
        """
        :type address: str
        :rtype: str
        """
        a = address.split('.')
        ans = ""
        for i in range(len(a)):
            if (i < len(a) - 1):
                ans += a[i] + "[.]"
            else:
                ans += a[i]

        return ans