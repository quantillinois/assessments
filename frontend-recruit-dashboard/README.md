# Recruiting Dashboard (own data)

**Difficulty: 4**

Thank you for applying to Quant! We are interested in your application and want to see what you can do with the skills and knowledge you possess. Please read through the following prompt for directions.

## **Prompt: Recruiting Dashboard**
Although society is moving towards data-driven applications, humans are still required for many tasks, and visualizing this data provides an understanding of what is going on in real time. The ability to visualize different pieces of data in a visually appealing and informationally dense format is as much an art as it is engineering. With the types of data we work with at Quant, we value your unique, artistic perspective in how to visualize and design such an application.

Your task is to build a UI/UX interface centered around recruitment and HR visualization, like a recruitment dashboard. Attached will be a CSV file of fake recruits, as well as information pertaining to them. We want you to design an interface that will articulate the information in an easily parsable format for humans, with a focus on user experience, ease with which to use your application, and modularity. You may want to add additional items that are not fake to test out your UI.

You will be graded on how responsive your UI is, how easy it is to add additional data, and how easy it would be for someone to continue to implement functionality in the near-future. This is all in addition to the criteria listed below. This means it would also be wise to include some information on how to run your code, what your code does, and maybe even a section stating what future improvements would be in case someone else hops on your project.

For your project specifically, your tech stack must use ONLY the following:
- React (Rendering library, only renders view from virtual DOM)
- Material-UI (gives object states, ie. CSS, how things should look) - https://www.youtube.com/watch?v=pHclLuRolzE
- D3 (takes in data -> draws interactive SVGs)
- Reflux - https://www.youtube.com/watch?v=RbgU-zvbX1o
- Browserify (dependencies)
- Grafana

To start working on your project, **make sure you have forked the repository so that you will own your own version**. All information should be provided to you in an email. If you have any questions, feel free to contact us. Good luck!

## **Resources**
- https://mui.com/getting-started/usage/
- https://github.com/reflux/refluxjs

## **Deliverables**
Your react application should do the following:
- Display data from any CSVs, JSONs, and APIs in a logical format on your dashboard
- Easy interface between application and API allowing easily changing data source
- Mouse-over components show relevant details of information on dashboard
- Allow people to add comments to an application 
- Be modular and follow best-practices in order to be "future-proof" for development by you or your teammates
- Any other things you think might be useful!

Optional:
- Pulls live data (daily or asynchronous) and updates dashboard accordingly
- Pull data from LinkedIn relevant to the person
- Documentation to an API for your dashboard to show how to interact with, perferably a Python wrapper

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