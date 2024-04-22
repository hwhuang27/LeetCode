import pandas as pd

def pivotTable(weather: pd.DataFrame) -> pd.DataFrame:
    return weather.pivot_table(index='month', columns='city', values='temperature', aggfunc="max")

'''
table = pd.pivot_table(df, values='D', index=['A', 'B'],
                       columns=['C'], aggfunc="sum")
    group by months
    give counts for each city
'''