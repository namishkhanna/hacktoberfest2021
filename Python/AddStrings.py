# Problem Statement
"""
Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.

You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

Example 1:

    Input: num1 = "11", num2 = "123"
    Output: "134"

Constraints:

    1 <= num1.length, num2.length <= 104
    num1 and num2 consist of only digits.
    num1 and num2 don't have any leading zeros except for the zero itself.
"""

class Solution:
    def addStrings(self, num1: str, num2: str) -> str:
        strToNum = {'0':0, '1':1, '2':2, '3':3, '4':4, '5':5, '6':6, '7':7, '8':8, '9':9}
        
        def strToInt(s: str) -> int:
            res = 0
            for i in s:
                res = res * 10 + strToNum[i]
            return res
        return str(strToInt(num1) + strToInt(num2))

# main block
if __name__ == "__main__":
    num1 = input()   # takes the first number string
    num2 = input()   # takes the second number string
    result = Solution().addStrings(num1, num2)
    print(result)