class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        INT_MAX = 2**31 - 1
        INT_MIN = -2**31
        if dividend == divisor:
            return 1
        if dividend == INT_MIN and divisor == -1:
            return INT_MAX
        sign = True
        if dividend >= 0 and divisor < 0:
            sign = False
        if dividend < 0 and divisor > 0:
            sign = False
        n = abs(dividend)
        d = abs(divisor)
        quotient = 0
        while n >= d:
            count = 0
            while n >= (d << (count + 1)):
                count += 1
            quotient += 1 << count
            n = n - (d << count)
        if quotient > INT_MAX:
            return INT_MAX if sign else INT_MIN
        return quotient if sign else -quotient
