class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        emailSet = set()

        for email in emails:
            splitEmail = email.split('@')
            newLocal = []
            for c in splitEmail[0]:
                if c is '+':
                    break
                if c is not '.':
                    newLocal.append(c)
            newLocal = ''.join(newLocal)
            splitEmail[0] = newLocal
            emailSet.add('@'.join(splitEmail))
        
        return len(emailSet)

'''
    split at '@' seperator
    iterate through local name 
        - remove periods
        - break at '+'
    join to make cleaned email
    add to set
    return count of set

'''