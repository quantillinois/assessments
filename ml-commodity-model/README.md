# Playing the Equity Markets using Commodity Data?

_Difficulty: 4_

Thank you for applying to Quant! We are very interested in your application and want to see what you can do with your skills and knowledge. Please read through the following prompt for what to do.

## Prompt: Commodity vs. Equity Analyzer:

Scores of industries rely on commodity trade and prices to produce new products and generate revenue. Often, companies that produce goods profit when the cost of their raw material goes down. It is not unreasonable to assume that the global commodity and futures markets influence the movements in domestic equities. However, this correlation may not be seen immediately but rather over an extensive period. Or, this may be a wholly mistaken assumption, and there is no significant correlation between the markets. Can you prove either claim?

Perhaps, oil companies tend to do better after growth in crude oil prices? Maybe they do worse??

Perhaps mining companies do poorly when the outlook for gold futures is hawkish. Or maybe, this has no effect at all on these companies.

**Your task, then, is to build a deep learning model, which identifies correlations between these markets across extended time periods.**

_You must realize that these may be cause-effect relationships, in which case, you will have to add a time delay to your model or use models that can overcome this hurdle._

### Task data:

United Nations Commodity Trade Data: https://www.kaggle.com/unitednations/global-commodity-trade-statistics

Commodity Price Index Values: https://www.kaggle.com/vagifa/usa-commodity-prices

Commodity Futures Historical Data by Commodity: https://www.kaggle.com/mattiuzc/commodity-futures-price-history

NYSE Data: https://www.kaggle.com/dgawlik/nyse

S&P500 Data: https://www.kaggle.com/camnugent/sandp500


#### Hint:
You do not only need to use the above data sources. You can also bring in any other data set you desire or scrape your own. For example, another dataset at https://datahub.io/core/s-and-p-500-companies has S&P500 companies listed along with their industries, which may be helpful!

## Deliverables:

- A Jupyter Notebook with all your code and thought processes. Remember, rather than the code you're writing. We intend to peer into your thought approach rather than prune your code.

## Grading:

We will be grading you on the final criteria:

1. Correlation Analysis:
  - How clean is your correlation analysis? Did you accurately prove a correlation between these two diverse asset classes? Were you able to disprove this claim?
  - Did you eliminate unnecessary features?
  - Did you choose the right model evaluation metrics?
  - Can someone else reading your notebook understand what you were thinking?

2. Documentation
  - Is it concise and exact?
  - Does it follow popular conventions?
  - Is it visual? (Lots of graphs, statistics, matrices, diagrams)
3. Code:
  - Does it follow best practices?
  - Is it modular and readable? (functions for subroutines, consistent nomenclature)
  - Is it customizable? (Can you change something in the model by just changing a few global variables, or do you use magic numbers in your code? https://en.wikipedia.org/wiki/Magic_number_(programming))
  - Is there technical debt in the code?
  - Does it handle bad inputs and errors

# Good Luck!
