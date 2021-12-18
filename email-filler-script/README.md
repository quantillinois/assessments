# Email Filler Script

**Difficulty: 1**

Thank you for applying to Quant! We are very interested in your application and wanted to see what you can do with the skills and brains you possess. Please read through the following prompt for what to do.

## **Prompt: Email Filler Script**
Emailing, although still mostly a human-centered application, can utilize automations to help save time especially on emails of scale. Personalizing these emails can be made faster through the use of Python scripts and that is where you come in!

We want you to develop a script to help fill in an email using data from a CSV. You will be given a certain pattern and then asked to fill in all corresponding patterns with the respective columns from the CSV. For example, if the pattern is something like `__name__` we would want you to fill it in with the "Name" column of the csv. However, we are also grading on robustness and that is especially true with this one. What happens if the column name is "name", "nAme", or " Name " instead? Your code will need to handle this. As a tip for doing this script, make use of the RegEx library provided by python to help you find patterns in near constant time (not really, but that's a topic for another day). Maybe even allow the user to pass in their own regex pattern (in this case, that would be `__[something here]__`). How do you want to do this? You should have ample documentation stating what format it defaults to and why that is.

For the second part of this script, we want you to decide if the email template itself contains any errors. That is, `__name__` might be mistyped as `__name_` or `__ name_ _` or `_name_`. It is your responsibility to figure out what is mistyped as you might want the pattern `_name_`, but if an email has both `__name__` and `_name_`, which one will you take? Are they different.

This assessment is all about design choices and documentation and we want to see that show through! We want to know how you document, how you incorporate best practices, and *why* you do those things. All code should be yours, but you are allowed to use a library. Any code from stackoverflow should include a comment with the link. Good luck!

## **Resources**
- https://www.computerhope.com/jargon/r/regex.htm
- https://docs.python.org/3/library/re.html
- https://docs.python.org/3/library/json.html
- https://realpython.com/python-send-email/
- https://docs.python.org/3/library/unittest.html
- https://realpython.com/python-testing/

## **Deliverables**
1. A python script that can parse the email template
2. The script can replace words matching a certain pattern with CSV
3. Can tell the user if an email is incorrectly formatted
4. Outputs all emails into a JSON file (to, cc, bcc, subject, body)

Optional Requirements:
- Create another script that will take in each PDF and correctly send them to the email destinations. 
- Add a compact testing suite that tests all edge cases. Remember one test should test one case, and be named appropriately.

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
