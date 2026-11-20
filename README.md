Personal Expense Tracker

### A Student Expense Management System Using C Programming

Batch 51 | Team 07**

**Team Members:** Ravi, Dhruv, Sarthak

---

## 1. Project Overview

The **Personal Expense Tracker** is a console-based application developed using the C programming language. It is designed to help students manage their monthly budgets, record daily expenses, and analyze their spending habits.

Students often spend money on food, travel, books, and entertainment without maintaining proper records. This application provides a simple and organized solution to monitor expenditure and manage financial resources effectively.

## 2. Problem Statement

Managing monthly expenses can be challenging for students who have limited budgets.

Without proper tracking, students may overspend and find it difficult to identify where their money is being spent.

Our project addresses this problem by providing an expense management system that records spending, calculates the remaining budget, and identifies major expenditure categories.

## 3. Project Objectives

- Develop a simple and user-friendly expense tracking application.
- Allow users to set and manage their monthly budget.
- Record multiple expenses under different categories.
- Calculate total expenditure and remaining budget.
- Identify the category with the highest expenditure.
- Display warnings when spending exceeds the monthly budget.
- Demonstrate the practical application of C programming.

## 4. Key Features

| Feature | Description |
|---|---|
| Monthly Budget | Set or update the monthly budget. |
| Add Expense | Record expenses under four categories. |
| Expense History | View all recorded expenses. |
| Expense Summary | Calculate total spending and remaining balance. |
| Category-wise Report | Display spending totals for each category. |
| Highest Expenditure | Identify the category with maximum spending. |
| Budget Warning | Alert users when the budget is exceeded. |
| Input Validation | Reject invalid categories and non-positive expense amounts. |

## 5. Expense Categories

The application organizes expenses into four categories:

1. **Food** — Meals, snacks, groceries, and daily food expenses.
2. **Travel** — Transportation, bus fares, and other travel expenses.
3. **Books** — Textbooks, notebooks, and study materials.
4. **Entertainment** — Movies, games, outings, and recreational activities.

## 6. Technologies Used

| Technology | Purpose |
|---|---|
| C Programming | Application development |
| Visual Studio Code | Code editor |
| GCC Compiler | Compilation and execution |
| GitHub | Project hosting and documentation |

## 7. Programming Concepts Implemented

The project demonstrates several important concepts of C programming.

- **Variables and Data Types:** Store budgets, expense amounts, and category information.
- **Arrays:** Store multiple expense records and category-wise totals.
- **Functions:** Divide the application into smaller, manageable modules.
- **Loops:** Repeat menu operations and process expense records.
- **Conditional Statements:** Validate inputs and check budget limits.
- **Switch-Case:** Execute different operations according to user choices.
- **Preprocessor Directives:** Define program constants and include required libraries.

## 8. Application Workflow

The Personal Expense Tracker follows a simple menu-driven workflow.

1. The application starts and displays the main menu.
2. The user sets a monthly budget.
3. The user records expenses under different categories.
4. The application updates total spending automatically.
5. The user can view expense history and spending summaries.
6. The application identifies the highest expenditure category.
7. A warning is displayed if the monthly budget is exceeded.
8. The process continues until the user chooses to exit.

### Project Flowchart

![Personal Expense Tracker Flowchart](flowchart.png)

## 9. Application Menu

The application provides six options:

| Option | Operation |
|---|---|
| 1 | Set Monthly Budget |
| 2 | Add Expense |
| 3 | View All Expenses |
| 4 | View Expense Summary |
| 5 | Category-wise Report |
| 6 | Exit |

## 10. Sample Execution

### Monthly Budget

Rs. 5,000

### Recorded Expenses

| Category | Amount (Rs.) |
|---|---:|
| Food | 1,200 |
| Travel | 800 |
| Books | 1,500 |
| Entertainment | 500 |
| Entertainment | 1,500 |
| **Total** | **5,500** |

### Expense Summary

| Description | Amount |
|---|---:|
| Monthly Budget | Rs. 5,000 |
| Total Spending | Rs. 5,500 |
| Remaining Budget | Rs. -500 |
| Budget Exceeded By | Rs. 500 |

**Budget Status: Exceeded**

### Category-wise Expenditure

| Category | Total Spending |
|---|---:|
| Food | Rs. 1,200 |
| Travel | Rs. 800 |
| Books | Rs. 1,500 |
| Entertainment | Rs. 2,000 |

**Highest Expenditure Category: Entertainment**

## 11. Testing and Validation

The application has been tested for the following scenarios:

| Test Case | Expected Result |
|---|---|
| Valid monthly budget | Budget stored successfully |
| Multiple expenses | All expenses recorded |
| Category-wise calculations | Correct category totals |
| Highest expenditure | Correct category identified |
| Budget exceeded | Warning displayed |
| Invalid category | Error message displayed |
| Negative expense amount | Invalid amount message |
| No recorded expenses | Appropriate message displayed |

Additional testing information is available in the project test case file.

## 12. Project Limitations

- The application supports a maximum of 100 expense records.
- Expense data is stored temporarily and is lost when the application closes.
- Editing and deleting recorded expenses are not currently supported.
- The application does not maintain separate monthly histories.
- Non-numeric input handling can be improved.

## 13. Future Enhancements

- Permanent expense storage using file handling.
- Date-wise and month-wise expense tracking.
- Edit and delete expense functionality.
- Graphical representation of spending patterns.
- Detailed financial reports.
- A graphical user interface for easier interaction.

## 14. Learning Outcomes

Through this project, we gained practical experience in:

- Designing a menu-driven application.
- Applying fundamental C programming concepts.
- Managing multiple expense records.
- Implementing expense calculations.
- Testing and debugging a working application.
- Organizing and documenting a project using GitHub.

## 15. Conclusion

The **Personal Expense Tracker** demonstrates how C programming can be used to develop a practical solution for managing student expenses.

It allows users to monitor their monthly spending, identify major expenditure categories, and receive warnings when their budget is exceeded.

The project provides a foundation for developing more advanced personal finance management applications.

---

**Developed by Batch 51 — Team 07**

**Ravi Kant Yadav - 590040813
Dhruv Kumar Faujdar - 590041014
Sarthak Kumar - 590037302**

**Programming Language: C**

**Project: Personal Expense Tracker**
