# Member Task Tracker

**Difficulty: 5**

Thank you for applying to Quant! We are interested in your application and want to see what you can do with the skills and knowledge you possess. Please read through the following prompt for directions.

## **Prompt: Member Task Tracker**
Automation is at the core of today's trading, and any little bit that can help track the current state of funds, projects, and teams are crucial in driving the success of any buisness. One of the most important parts to help aid in the Continuous Integration/Continuous Development pipeline is tracking members' progress on a project and how that project is coming along. At Quant, we want to provide everyone with ease of access to see how projects are developing in order to meet our deadlines.

Your task is to build a set of Python scripts and microservices to help keep track of a member's work and a project's progress through GitHub. You will need to compare their commits with a list of project requirements and track the project's completion, there timeline until completion, and any new issues that need to be assigned.

For example, say for 



Although trading is usually thought of as placing an order to buy/sell some security, the reality is that it is far more complex than that. Variables like the order size, timing, spread, and liquidity of a security can drastically affect how our orders will hit exchanges. When creating strategies, we must account for these things, including order execution costs and slippage, to accurately execute our orders.

Your task is to build a suite of python scripts and microservices that will take in an order, execute it on an exchange, and then mark the resultant executed orders and their statistics. For example, an order for 100 AAPL shares at $123.01-$123.05 could be executed as 80 AAPL @ $123.02 and 20 AAPL @ $123.025. You need to correctly tally all executions and return to sender (the person who placed the order) an "invoice" summary of what they executed at. You will need to create your own fake trading data to help you debug and pass stuff in. 

A standard trading order might look like this:
- Exchange: NYSE (IEX, CME, ...)
- Type: Limit Order (Stop Loss, Market Order, Limit Order, IOC, ...)
- Ticker: AAPL (BTC, Doge, USD, ...)
- Quantity: 100 
- Security: Stock (Options, Futures, Bonds, ...; really derivatives vs. regular security)
- Min price: NaN
- Max price: $123.05
- Expiry: 12/31/2021 15:00:00.000 EST

Feel free to change it up if you feel like something is missing. You may also want to know who made the order, which portfolio the stock will go to, etc. However, this information won't be passed onto the exchange and will be kept for bookkeeping. You may also need to create a dummy "orderer" who will help feed you the orders *asynchronously*. 

You will be graded on how accurate your bookkeeping is, how quickly you can process the orders (and delay), and the method in which you store the data. This is all in addition to the criteria listed below. This means it would also be wise to include some information on how to run your code, what your code does, and maybe even a section stating what future improvements would be in case someone else hops on your project.

To start working on your project, **make sure you have forked the repository so that you will own your own version**. All information should be provided to you in an email. If you have any questions, feel free to contact us. Good luck!

## **Resources**
Electronic Trading Protocols
- https://en.wikipedia.org/wiki/Financial_Information_eXchange
- https://www.investopedia.com/terms/o/oms.asp
- https://www.investopedia.com/investing/basics-trading-stock-know-your-orders/
- https://en.wikipedia.org/wiki/List_of_electronic_trading_protocols
- https://www.tradingtechnologies.com/xtrader-help/eris-gateway/configuring-order-management/understanding-order-management/

Crypto API for data
- https://github.com/ccxt/ccxt
- https://coinmarketcap.com/api/

## **Deliverables**
Your project should do the following:
- Accept order requests and execute them on an exchange (this can be paper trading)
  - Ideally can actually place an order on some exchange (CoinMarketCap for example)
- Expose a lean API that can easily place these orders (potentially RESTful!)
- Store all executed orders in persistant storage
  - Database if possible, else text (JSON or CSV) is fine for now
- (Possibly separate) API to query for bookkeeping and how orders were executed
- Send back an invoice to the orderer pertaining to details of execution

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