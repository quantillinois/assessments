# GraphQL Polygon API

**Difficulty: 2**

Thank your for applying to Quant! We are interested in your application and want to see what you can do with the skills and knowledge you possess. Please read through the following prompt for directions.

## **Prompt: GraphQL Polygon API**
GraphQL is a promising new language that will help us better access our data. If you are unfamiliar with GraphQL, I suggest you read up and watch some YouTube videos about it. It allows us to only query for the data and objects we will use, whereas a REST API requires us to throwaway irrelevant objects that were returned by the query. 

Your task is to build a GraphQL wrapper around Polygon's API. Specifically, we want you to create a GraphQL API, which when used, will return the appropriate information about a stock or security from Polygon.io's API. 

A sample API request (in this case for stocks) needs to at least require:
- Type of query (Trade, Offer/Bid, Aggregate, Document, etc.)
- Exchange (NYSE, CME, etc.)
- Ticker/Symbol 
- Time Start
- Time End
- Granularity & corresponding Weight
- Adjusted for stock split or not
- and more

You will be graded on how how simple your API is, how flexible it is to future improvement, and the ease it is to hookup other data sources from our data warehouse. This is all in addition to the criteria listed below. This means it would also be wise to include some information on how to run your code, what your code does, and maybe even a section stating what future improvements would be in case someone else hops on your project. We would also prefer a Node.js runtime if possible.

To start working on your project, **make sure you have forked the repository so that you will own your own version**. All information should be provided to you in an email. If you have any questions, feel free to contact us. Good luck!

## **Resources**
GraphQL
- https://graphql.org/
- https://spec.graphql.org/October2021/
- https://api.spacex.land/graphql/

Polygon
- https://polygon.io/docs/stocks/getting-started

## **Deliverables**
Your API should have:
- Well documentation on API Requests
- GraphQL sample request and response similar to SpaceX sample API
- Easily request different types of data (stock, documents, grid vs. timeseries data, etc.)

## **Grading**
We will be looking at your project and grading it under these five criteria:
1. Code
   - If it works
   - Modular
   - Follows best practices (ie. OOP)
2. Documentation
   - Concise and exact
   - Follows popular conventions
3. Styling
   - Human readable
   - Can quickly glance to receive all relevant information
   - Follows Google Style Guide (preferred if it exists) or most popular convention (ie. PEP8)
4. Robustness
   - Customizable
   - No technical debt (future proof)
   - Handles bad inputs and errors
5. Git
   - [Good commit messages](https://cbea.ms/git-commit/#seven-rules)
   - Commits are properly sized

For a full list of the grading criteria, please see the following [document](https://docs.google.com/spreadsheets/d/16CqSJSlch7w9q4_ZTiydKGk0T01rgvIEcHHwqsI_KSo/edit?usp=sharing). 