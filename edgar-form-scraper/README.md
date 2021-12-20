# Edgar Form Scraper

**Difficulty: 4**

Thank you for applying to Quant! We are very interested in your application and wanted to see what you can do with the skills and knowledge you possess. Please read through the following prompt for what to do.

## **Prompt: Edgar Form Scraper**
Institutional investors, Brokers, and other large financial market particpants (minimum $100 million under management) are required to submit many forms, one of them being 13F, to the SEC every quater. This form was created by Congress in 1975 in order to provide transparency into these large market participants. Form 13F contains a lot of very important information like position-level disclosure of the top firms on Wall Street. However, participants can submit the form up to 45 days after quater end to protect their strategies and delay information dissemination as long as possible. There is a lot of data At Quant, we want to be able to use this information in an aggregate manner to make insights into our positions.

Your task is to build a Python scraper for Edgar using its API. The goal of the script will be to gather as much data as possible in an easily parsable format for us to later include in our strategies. You should make sure to scrape for any information regarding their positions, exposure, and number pertaining to each filing. We want you to dump this data into a fast, parsable file format (JSON or CSV for example, whichever you think is best).

You will be graded on how fast your code runs, the ability to "future-proof" it, and the easeness that one unfamiliar with your code base can run your program in addition to the criteria listed below. This means it would also be wise to include some information on how to run your code, what your code does, and maybe even a section stating what future improvements would be in case someone else hops on your project.

To start working on your project, **make sure you have forked the repository so that you will own your own version**. If you have any questions, feel free to contact us.

## **Resources**
- https://www.sec.gov/edgar/search-and-access
- https://pypi.org/project/sec-api/
- https://www.youtube.com/watch?v=vBH6GRJ1REM&ab_channel=mCoding

## **Deliverables**
Your python application/script should do the following:
- Be able to accept command line arguments to pass in any arguments (e.g. Form 13f, 10-Q)
- Be able to accept filtering and fast access to information (e.g Number of filings with stock ticker, Participants with more than $20 million in a stock); this is the hard part!
- Store all data into easily parsable and logically organized objects/classes
- Output data into a file with logical parsing
- As part of your python application, add a script that will help parse the file with respect to your data class

Optional requirements:
- Create a script that will expose this as an API
- Add your own pyenv with all environment requirements
- Be able to pass in a txt file with a list of keywords instead of one-by-one
- Be able to use regex to dynamically search for keyword, ideally in addition to the above bullet.
- Recommend similar keywords if a keyword is mispelled or does not exist, preferably recommended by some criteria

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
