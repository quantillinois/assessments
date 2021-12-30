#!/usr/bin/env python3
from faker import Faker
import pandas as pd
import numpy as np
from datetime import date

if __name__ == "__main__":
    fake = Faker()
    Faker.seed(1234)
    df = pd.read_csv("~/Downloads/data.csv")
    
    n = 80
    
    df.drop(columns=["Email Address", "NetID", "LinkedIn/Personal Website", "Comments", "Unnamed: 17", "total applicants: ", "Unnamed: 20", "90"], axis=1, inplace=True)
    df.drop(np.arange(n, df.shape[0], 1, dtype=int), inplace=True) # 80 rows
    
    df["Name"] = [fake.name() for _ in range(n)]
    
    df.to_csv("~/Downloads/test.csv", index=False)
    print(df.shape)
    