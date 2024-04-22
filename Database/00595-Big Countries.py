import pandas as pd

def big_countries(world: pd.DataFrame) -> pd.DataFrame:
    return world.loc[(world['area'] >= 3000000) | (world['population'] >= 25000000), ['name', 'population', 'area']]

'''
# return students.loc[students['student_id'] == 101, ['name', 'age']]

filter on 
    area > 3000000
    OR pop > 25000000

reduce columns
'''