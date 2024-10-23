import pandas as pd

def createBonusColumn(employees: pd.DataFrame) -> pd.DataFrame:
    df = employees
    bonus = df['salary'].tolist()

    for i in range(len(bonus)):
        bonus[i] = bonus[i] * 2

    ans = df.assign(bonus=bonus)
    return ans