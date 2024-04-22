import pandas as pd

def invalid_tweets(tweets: pd.DataFrame) -> pd.DataFrame:
    return tweets.loc[tweets['content'].str.len() > 15, ['tweet_id']]

'''
filter on tweets strictly greater than 15

filter on tweet_id column
'''