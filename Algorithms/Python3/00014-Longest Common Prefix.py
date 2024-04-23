class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs = sorted(strs, key=len)
        result = ""
        for i, c in enumerate(strs[0]):
            for word in range(len(strs)):
                if strs[word][i] != c:
                    return result
            result += c 

        return result


'''
    sort strs by shortest word first OR swap shortest word to first index

    take the first character of the first string
    iterate through each word in strs to see if each first char matches that char
    if yes, then append char to our output string
    if no, then return output string
    repeat until no more characters

    tc: O(nlogn)
    sc: O(n)


'''