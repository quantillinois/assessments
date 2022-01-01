# backtest-database-pipeline

**Difficulty: 5**

Thank you for applying to Quant! We are very interested in your application and want to see what you can do with the skills and knowledge you possess. Please read through the following prompt for what to do.

## **Prompt: Backtest Database Pipeline**

At Quant, we are looking to develop our own backtesting infrastructure. One of the things integral to something like this is developing a pipeline between the database, a stock api, and our api. 

Your task is to spin up a server/serverless relational database instance (akin to Amazon Aurora RDS instance), fill it with data from Polygon.io, and then create a webserver (using Flask or something similar) of which we can query the database for data. Yep that's it! Keep it mind we really just want a working Minimum Viable Product, so you don't have to use the latest technology if it'll take too long. You can do that when you're on the team!

However, if you have time, I want you to implement the API for the webserver in GraphQL instead of a regular RESTful API.

You will be graded on fast your queries are, how well documented your code is, and the ease at which we can swap to a different stock data provider (from Polygon.io to Tradeview for example). This is all in addition to the criteria listed below. This means it would also be wise to include some information on how to run your code, what your code does, and maybe even a section stating what future improvements would be in case someone else hops on your project.

To start working on your project, make sure you have forked the repository so that you will own your own version. All information should be provided to you in an email. If you have any questions, feel free to contact us. Good luck!

## **Resources**
- https://aws.amazon.com/rds/
- https://polygon.io/docs/stocks/getting-started
- https://flask.palletsprojects.com/en/2.0.x/quickstart/

Optional
- https://ariadnegraphql.org/docs/intro

## **Deliverables**

1. Setup a database populated with data from Polygon.io
   - You can just request AAPL stock from 2021-12-1 to 2021-12-30 on a 1 hour granularity
2. Python code that uses Polygon.io's API to grab data and (separately) write to database.
   - The emphasis of separate here is to put in your mind that we might not always need to write to database and could send directly to user. I want you to make sure this functionality is there. If your starting to notice, there's a huge emphasis on system design here.
3. Provide an API to request stock information (through webserver or something similar)

Optional requirements:
- Use GraphQL instead of RESTful API for querying to webserver.
- Make sure we can easily switch out to different data provider

## **Grading**
We will be looking at your project and grading it under these five criteria:
1. Code
 - If it works
 - Modular
 - Follows best practices (i.e., OOP)
2. Documentation
 - Concise and exact.
 - Follows popular conventions.
 - Visuality. (Lots of graphs and statistics)
3. Styling
 - Human readable
 - Can quickly glance to receive all relevant information
 - Follows Google Style Guide (preferred if it exists) or most popular convention (i.e., PEP8)
4. Robustness
 - Customizable
 - No technical debt (future proof)
 - Handles bad inputs and errors
5. Git
 - [Good commit messages](https://cbea.ms/git-commit/#seven-rules)
 - Commits are appropriately sized

For a complete list of the grading criteria, please see the following [document](https://docs.google.com/spreadsheets/d/16CqSJSlch7w9q4_ZTiydKGk0T01rgvIEcHHwqsI_KSo/edit?usp=sharing). 
