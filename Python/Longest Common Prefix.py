"""
Problem Statement:

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".
"""


class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        h=[]
        for i in strs[0]:
            h.append([i,0])
        for i in strs:
            k=0
            for j in h:
                if(k<len(i) and i[k]==j[0]):
                    j[1]+=1
                else:
                    break
                k+=1
        ans=""
        for i in h:
            if(i[1]==len(strs)):
                ans+=i[0]
        return ans
