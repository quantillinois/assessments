# Queue

**Difficulty: 3**

Thank you for applying to Quant! We are interested in your application and want to see what you can do with the skills and knowledge you possess. Please read through the following prompt for directions.

## **Prompt: Quant::Queue**
Queues are an abstract data structure that sees use in many everyday examples. You already form a queue at the checkout line when you go shopping, but how are they used in finance? Exchanges need to be able to match new order entries with existing ones on the order book to correctly fill orders and execute a trade. This is done in the central hub of an exchange called the Order Matching Engine (OME). Although these OMEs have a large focus on high throughput, at the core of it all are either queues and linked list which help them keep track of who's in front and correctly fill trades by matching buyers to sellers.

Your task is to implement the data structure Queue we provided to you in the src folder. Please look through it and familiarize with all the code. Please use the C++ queue functions as reference for what your functions can do. You can opt to code similar functionality or add a little spice to it, as long as you can justify why you did it. Note that the main purpose of this Queue is for our own OME. This part is required. ***DO NOT INCLUDE STD::QUEUE OR STD::VECTOR AT ALL IN YOUR CODE***. Please use C arrays or any other way you are comfortable (and makes sense) that doesn't trivialize this assignment. Furthermore, we have included a blank `test.cpp` for you to insert tests in. This uses the Catch2 Framework.

You will see a `matching.cpp` which is EXTRA CREDIT for those who complete this assignment. We don't expect that everyone will be able to complete this, but we know that the top candidates may find this task too simple. Please do what you can while learning things along the way.

You are graded primarily on the completeness of your Queue class, the tests you've created, as well as good code design. Please follow good C++ conventions, including but not limited to styling from the Google C++ Style Guide. Make sure you have the same function signature as the C++ reference in `queue.h`, but you may change it up if you can justify a reason to. ***DO NOT INCLUDE STD::QUEUE OR STD::VECTOR AT ALL IN YOUR CODE***. Doing so is an automatic forfeit of this assignment. 


To start working on your project, **make sure you have forked the repository so that you will own your own version**. All information should be provided to you in an email. If you have any questions, feel free to contact us. Good luck!

## **Resources**
- Google C++ Style Guide: https://google.github.io/styleguide/cppguide.html
- std::queue reference: https://en.cppreference.com/w/cpp/container/queue
- Catch2 Tutorial: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md

## **Deliverables**
- queue.h
- queue.hpp
- matching.cpp
- test.cpp
- main.cpp
- match.cpp

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