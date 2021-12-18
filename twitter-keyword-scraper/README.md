# Twitter Keyword Scraper

**Difficulty: 3**

Thank you for applying to Quant! We are very interested in your application and wanted to see what you can do with the skills and knowledge you possess. Please read through the following prompt for what to do.

## **Prompt: Twitter Keyword Scraper**
The rise of retail trading and tracking this information dessimination has often been at the center of attention for those looking to track what others are doing. Twitter has always been an interesting pool of information, with everyone around the world tweeting away and expressing their views and emotions about products, ideas and issues. At Quant, we want to be able to use this information in an aggregate manner to make insights into our positions.

Your task is to build a Python scraper for Twitter using its API. The goal of the script will be to gather tweets mentioning a particular keyword, that we can use later as part of our Quantitative Research Division. Your scrape should gather popular tweets mentioning a particular keyword (this can be either a hashtag about a social issue, a stock ticker, or anything else, really), made in a certain user specified timeframe (1h, 2h etc). It should also gather data about the metadata about these tweets, such as location, the user making the tweets, likes, retweets and comments. We need to be able to parse these, and then it needs to be output into a fast, parsable file format (JSON or CSV for example).

You will be graded on how fast your code runs, the ability to "future-proof" it, and the easeness that one unfamiliar with your code base can run your program in addition to the criteria listed below. This means it would also be wise to include some information on how to run your code, what your code does, and maybe even a section stating what future improvements would be in case someone else hops on your project.

To start working on your project, **make sure you have forked the repository so that you will own your own version**. If you have any questions, feel free to contact us.

## **Resources**
- https://developer.twitter.com/en/docs/twitter-api/tools-and-libraries/v2
- https://github.com/twitterdev/search-tweets-python
- https://towardsdatascience.com/an-extensive-guide-to-collecting-tweets-from-twitter-api-v2-for-academic-research-using-python-3-518fcb71df2a
- https://python-twitter.readthedocs.io/en/latest/

## **Deliverables**
Your python application/script should do the following:
- Be able to accept command line arguments to pass in a keyword (e.g. "$TSLA", "#omicron")
- Be able to accept the filtering (e.g "Top", "Latest")
- Obtain a list of tweets and the following information in as few calls as possible:
   - Number of likes, retweets, comments in each tweet.
   - Link to each user of the tweet (for if we want to further parse the user in an another application)
   - List of comments (do not directly parse this, this will slow you down, instead, write another function to get a list of comments in case we need to, using the tweetID)
   - Location if it exists.
   - Time the tweet was made
   - Any additional metric you think might be useful!
- Store all data into easily parsable and logically organized objects
- Output data into a file with logical parsing
- As part of your python application, add a script that will help parse the file with respect to your data class

Optional requirements:
- Create a script that will expose this as an API
- Add your own pyenv with all environment requirements
- Be able to pass in a txt file with a list of keywords instead of one-by-one
- Be able to use regex to dynamically search for keyword, ideally in addition to the above bullet.
- Recommend similar keywords if a keyword is mispelled or does not exist, preferably recommended by some criteria
- Analyse macro-trends. For example, which keywords are likely to be used in conjuction with others, which combination of keywords get the most traction, etc
- Analyse the trend in the tweets (increase in likes, comments, etc over time).

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
