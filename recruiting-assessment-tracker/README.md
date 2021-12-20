# Recruiting Assessment Tracker

**Difficulty: 5**

Thank you for applying to Quant! We are very interested in your application and wanted to see what you can do with the skills and knowledge you possess. Please read through the following prompt for what to do.

## **Prompt: Recruiting Assessment Tracker**
As much of an importance data is to strategy, of equal if not greater importance is the human factor driving new ideas. Tracking new recruits, assigning assessments, and making sure qualified candidates move forward to become members is a core goal that is very much recognized. At Quant, we want to make sure every interested applicant is properly tracked and cared for in order to remain fair and inclusive in our recruiting process.

Your task is to develop a set of microservices that will help keep track of an applicant's process in our system. You will be given a set of data to work with. This could be an applicant's application submission, comments, what assessments were given out to whom, etc. Your job is to find an architecture that can fully support the relations between the applicants while also be easy to update with any new information. As you can tell, although this could be seen as strictly a parsing assignment, how you parse, how you store, and how you fetch the data matters. The systems design portion is as important as your code working.

You will be graded on how fast your code runs, the ability to "future-proof" it, and the easeness that one unfamiliar with your code base can run your program in addition to the criteria listed below. This means it would also be wise to include some information on how to run your code, what your code does, and maybe even a section stating what future improvements would be in case someone else hops on your project.

To start working on your project, **make sure you have forked the repository so that you will own your own version**. If you have any questions, feel free to contact us.

## **Resources**
- https://www.fullstackpython.com/microservices.html
- https://pythonbasics.org/webserver/

## **Deliverables**
Your python application/script should do the following:
- Be able to accept command line arguments to pass in any arguments and to query
- Be able to accept filtering and fast access to information (e.g. Which people are doing assesment A, which people have passed their deadline)
- Store all data into easily parsable and logically organized objects/classes
- Output data into a file with logical parsing
- As part of your python application, add a script that will help parse the file with respect to your data class

Optional requirements:
- Expose your script with an API
- Add your own pyenv with all environment requirements
- Be able to pass in a txt file with a list of keywords instead of one-by-one (easily scriptable)
- Add an overview with anything you think should be noticed (e.g. Number of people passed deadline, Number of people turned in but haven't checked, etc.)
- Recommend similar keywords if a query is mispelled or does not exist, preferably recommended by some criteria

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
