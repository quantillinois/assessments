#!/usr/bin/env python3
from faker import Faker
import pandas as pd
import numpy as np
from datetime import date

if __name__ == "__main__":
    fake = Faker()
    data = pd.read_csv("example_assignment.csv")
    sub = pd.read_csv('example_submission.csv')
    
    for i in range(40):
        num = np.random.randint(0, 4)
        name = sub["Name"][i]
        email = sub["Email Address"][i]
        start = date(2021, 12, 15)
        end = date(2021, 12, 30)
        assignment = "Assignment " + str(np.random.randint(1, 30))
        qr = assignment if num == 0 else np.nan
        strat = assignment if num == 1 else np.nan
        soft = assignment if num == 2 else np.nan
        business = assignment if num == 3 else np.nan
        row = {
            "Name" : name,
            "Email" : email,
            "Quantitative Research" : qr,
            "Strategy Implementation" : strat,
            "Software Development" : soft,
            "Business" : business,
            "Date Given" : start,
            "Due Date" : end
        }
        data.loc[i] = row
    
    print(data)
    data.to_csv("example_assignment.csv", index=False)
    