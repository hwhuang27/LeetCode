import pandas as pd

def meltTable(report: pd.DataFrame) -> pd.DataFrame:
    return report.melt(id_vars=['product'], value_vars=['quarter_1', 'quarter_2', 'quarter_3', 'quarter_4',], var_name='quarter', value_name='sales')

# df.melt(id_vars=['A'], value_vars=['B', 'C'])
#    A variable  value
# 0  a        B      1
# 1  b        B      3
# 2  c        B      5
# 3  a        C      2
# 4  b        C      4
# 5  c        C      6