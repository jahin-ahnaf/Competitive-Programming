import pandas as pd

def modifySalaryColumn(employees: pd.DataFrame) -> pd.DataFrame:
    col = employees["salary"]
    for i in range(len(col)):
        col[i] = col[i] * 2
    employees.update(pd.DataFrame({'name' : employees["name"],'salary' : col}))
    return employees