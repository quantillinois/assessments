# Instagram Analytics Script

**Difficulty: 2**

Thank you for applying to Quant! We are very interested in your application and wanted to see what you can do with the skills and knowledge you possess. Please read through the following prompt for what to do.

## **Prompt: Instagram Analytics Script**
Part of our mission as a club is to help expand and open up the world of finance to all students. Doing so means we need to have up-to-date information on how our posts are doing and providing analytics to best measure what information our followers are most interested in. At Quant, helping automate away processes and providing insights is at the core of what we do, and we'd love to apply that to our business division as well.

Your task is to connect with Instagram's API to pull analytics data. The goal of this script will be to gather information about our account, mentions, posts, and traffic in order to quantize our impact to the community. In addition to all metrics pertaining to the above mentioned, you should also make sure to include any metadata and metrics possible. Please save these in some sort of persistant memory (SQL Databasem, etc.), or parasable file (CSV, JSON, etc.), with preference towards the former.

After storing these metrics, we would like you to publish statistics on your data. For example, these could be the number of views from a post or how many additional followers gained following each post. Note that we don't just want data, but also data history, so you may need to keep track of time-based metrics, which is not provided by the API.

You will be graded on how fast your code runs, the ability to "future-proof" it, and the easeness that one unfamiliar with your code base can run your program in addition to the criteria listed below. This means it would also be wise to include some information on how to run your code, what your code does, unit tests, and maybe even a section stating what future improvements would be in case someone else hops on your project.

To start working on your project, **make sure you have forked the repository so that you will own your own version**. If you have any questions, feel free to contact us.

## **Resources**
- https://developers.facebook.com/docs/instagram
- https://www.youtube.com/watch?v=vBH6GRJ1REM

## **Deliverables**
Your code should do the following:
- Be able to grab all data related to an account from Instagram
  - Number of posts, post likes, followers, comments on posts, likes on comments, etc.
- Store data in persistant memory or parsable file
  - Database preferred
- Add a script that will help parse the file with respect to your data class
- Calculate meaningful statistics on your data; create a function for each statistic (ie. shouldn't return matplotlib pyplot, but instead an array in case we want to use another way of displaying data)


Optional requirements:
- Find a way to display your data using graphs on a UI interface (not just matplotlib)
- Use a database to store your data
- anything else you can think of!

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