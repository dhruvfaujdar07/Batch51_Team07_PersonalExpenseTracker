#include <stdio.h>

#define MAX 100


float budget = 0;
float total = 0;
float expenses[4] = {0};

float amounts[MAX];
int expenseCategories[MAX];
int expenseCount = 0;

char categories[4][20] = {
    "Food",
    "Travel",
    "Books",
    "Entertainment"
};


void setBudget(void);
void addExpense(void);
void viewExpenses(void);
void viewSummary(void);
void categoryReport(void);

int main(void)
{
    int choice;

    do
    {
        printf("\n================================\n");
        printf("     PERSONAL EXPENSE TRACKER\n");
        printf("================================\n");

        printf("1. Set Monthly Budget\n");
        printf("2. Add Expense\n");
        printf("3. View All Expenses\n");
        printf("4. View Expense Summary\n");
        printf("5. Category-wise Report\n");
        printf("6. Exit\n");

        printf("================================\n");
        printf("Enter your choice: ");

        if(scanf("%d", &choice) != 1)
        {
            printf("Invalid input!\n");
            return 1;
        }

        switch(choice)
        {
            case 1:
                setBudget();
                break;

            case 2:
                addExpense();
                break;

            case 3:
                viewExpenses();
                break;

            case 4:
                viewSummary();
                break;

            case 5:
                categoryReport();
                break;

            case 6:
                printf("\nThank you for using "
                       "Personal Expense Tracker!\n");
                break;

            default:
                printf("\nInvalid choice!\n");
        }

    } while(choice != 6);

    return 0;
}


void setBudget(void)
{
    float newBudget;

    printf("\nEnter monthly budget: ");
    if(scanf("%f", &newBudget) != 1)
    {
        printf("Invalid input!\n");
        return;
    }

    if(newBudget <= 0)
    {
        printf("Invalid budget amount!\n");
        return;
    }

    budget = newBudget;

    printf("\nBudget set successfully!\n");
    printf("Monthly Budget: Rs. %.2f\n", budget);
}

void addExpense(void)
{
    int category;
    float amount;

    if(budget <= 0)
    {
        printf("\nPlease set budget first!\n");
        return;
    }

    if(expenseCount >= MAX)
    {
        printf("\nExpense storage is full!\n");
        return;
    }

    printf("\n===== ADD EXPENSE =====\n");

    printf("1. Food\n");
    printf("2. Travel\n");
    printf("3. Books\n");
    printf("4. Entertainment\n");

    printf("Choose category: ");
    if(scanf("%d", &category) != 1)
    {
        printf("Invalid input!\n");
        return;
    }

    if(category < 1 || category > 4)
    {
        printf("Invalid category!\n");
        return;
    }

    printf("Enter amount: ");
    if(scanf("%f", &amount) != 1)
    {
        printf("Invalid input!\n");
        return;
    }

    if(!(amount > 0) || amount > 1000000000)
    {
        printf("Invalid amount!\n");
        return;
    }

    amounts[expenseCount] = amount;
    expenseCategories[expenseCount] = category - 1;
    expenseCount++;

    expenses[category - 1] += amount;
    total += amount;

    printf("\nExpense added successfully!\n");
    printf("Category: %s\n", categories[category - 1]);
    printf("Amount: Rs. %.2f\n", amount);

    if(total > budget)
    {
        printf("\nWARNING: Budget exceeded!\n");
    }
}

void viewExpenses(void)
{
    int i;

    if(expenseCount == 0)
    {
        printf("\nNo expenses recorded!\n");
        return;
    }

    printf("\n========== ALL EXPENSES ==========\n");
    printf("No.\tCategory\tAmount\n");
    printf("----------------------------------\n");

    for(i = 0; i < expenseCount; i++)
    {
        printf("%d\t%-14s Rs. %.2f\n",
               i + 1,
               categories[expenseCategories[i]],
               amounts[i]);
    }
}

void viewSummary(void)
{
    float remaining;

    if(budget <= 0)
    {
        printf("\nPlease set budget first!\n");
        return;
    }

    remaining = budget - total;

    printf("\n======= EXPENSE SUMMARY =======\n");

    printf("Monthly Budget: Rs. %.2f\n", budget);
    printf("Total Spending: Rs. %.2f\n", total);
    printf("Remaining Budget: Rs. %.2f\n", remaining);

    if(total > budget)
    {
        printf("\nWARNING: Budget Exceeded!\n");
        printf("Overspent: Rs. %.2f\n", -remaining);
    }
    else
    {
        printf("\nStatus: Within Budget\n");
    }
}

void categoryReport(void)
{
    int i, maxIndex = 0;

    printf("\n===== CATEGORY-WISE REPORT =====\n");

    for(i = 0; i < 4; i++)
    {
        printf("%s: Rs. %.2f\n",
               categories[i], expenses[i]);
    }

    if(expenseCount == 0)
    {
        printf("\nNo expenses recorded!\n");
        return;
    }

    for(i = 1; i < 4; i++)
    {
        if(expenses[i] > expenses[maxIndex])
        {
            maxIndex = i;
        }
    }

    printf("\nHighest Expenditure Category: %s\n",
           categories[maxIndex]);

    printf("Highest Amount: Rs. %.2f\n",
           expenses[maxIndex]);
}
