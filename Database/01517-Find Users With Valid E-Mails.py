import pandas as pd

def valid_emails(users: pd.DataFrame) -> pd.DataFrame:
    valid_emails_df = users[users['mail'].str.match(r'^[A-Za-z][A-Za-z0-9_\.\-]*@leetcode(\?com)?\.com$')]
    
    return valid_emails_df
'''

prefix name
    - must start with a letter
    - must only have letters, underscore, period, dash

domain name
    - must be @leetcode.com
'''