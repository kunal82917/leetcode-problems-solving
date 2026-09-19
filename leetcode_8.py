class Solution:
    def myAtoi(self, s: str) -> int:
        s = s.lstrip()
        if not s:
            return 0

        sign = 1
        start = 0
        if s[0] == "-":
            sign = -1
            start = 1
        elif s[0] == "+":
            start = 1

        res = 0
        for i in range(start, len(s)):
            if s[i].isdigit():
                res = res * 10 + int(s[i])
            else:
                break

        res *= sign

        INT_MIN = -(2**31)
        INT_MAX = 2**31 - 1

        if res < INT_MIN:
            return INT_MIN
        if res > INT_MAX:
            return INT_MAX

        return res
