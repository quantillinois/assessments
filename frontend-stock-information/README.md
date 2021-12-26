# Stock Information UI

**Difficulty: 3**

Thank you for applying to Quant! We are interested in your application and want to see what you can do with the skills and knowledge you possess. Please read through the following prompt for directions.

## **Prompt: Data Dashboard**
With the rise of data's prevelance in a myriad of applications, the need for human-readable UI interfaces has only increased. Information about a stock, like its volume, price, high/low's, market cap, analyst ratings, and news need to be displayed in a manner that both conveys the necessary information and is also comfortable to the human eye. A good UI goes a long way; Robinhood's meteroic rise in popularity over other brokers was largely due to its intuitive interface and design that appealed to the new tech-savvy generation. At Quant, we need people with both a creative mindset in designing such interfaces while also having the technical skill to display the correct information.

Your task is to build a UI/UX interface centered around a stock ticker's information. We want you to source some data yourself, through Python or whatever language you are most comfortable with. Focus your time on one ticker, say AAPL and go from there. For inspiration, feel free to take a look at Robinhood's UI or any other broker. We are assessing your skill in putting together a UI, not grabbing data (not yet at least!), so focus your time accordingly.

You will be graded on how responsive your UI is, how easy it is to transition to different data, and how easy it would be for someone to continue to add functionality in the near-future. This is all in addition to the criteria listed below. This means it would also be wise to include some information on how to run your code, what your code does, and maybe even a section stating what future improvements would be in case someone else hops on your project.

For your project specifically, your tech stack must use ONLY the following:
- React (Rendering library, only renders view from virtual DOM)
- Material-UI (gives object states, ie. CSS, how things should look) - https://www.youtube.com/watch?v=pHclLuRolzE
- D3 (takes in data -> draws interactive SVGs)
- Reflux - https://www.youtube.com/watch?v=RbgU-zvbX1o
- Browserify (dependencies)
- Grafana

To start working on your project, **make sure you have forked the repository so that you will own your own version**. All information should be provided to you in an email. If you have any questions, feel free to contact us. Good luck!

## **Resources**
- https://www.learndatasci.com/tutorials/python-finance-part-yahoo-finance-api-pandas-matplotlib/
Crypto Data APIs
- https://github.com/ccxt/ccxt
- https://coinmarketcap.com/api/

## **Deliverables**
Your React application should do the following:
- Correctly display all relevant information on a logical UI interface
- Any updates from your data is directly transferred to your UI
- Can zoom in and out of the graph
- Modular design that allows easy adaptability into pulling live data
- Any other things you think might be useful!

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
