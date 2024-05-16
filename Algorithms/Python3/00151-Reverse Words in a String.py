class Solution:
    def reverseWords(self, s: str) -> str:
        s = s.strip()
        new = s.split(' ')
        cleaned = []
        for word in new:
            if word != '':
                cleaned.append(word)

        cleaned = cleaned[::-1]
        
        return ' '.join(cleaned)


'''
trim
split
reverse all words
join
return string
O(n^2) - simple solution


'''