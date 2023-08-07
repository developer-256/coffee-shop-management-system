#include <iostream>
using namespace std;
void how_to_use();
void show_menu();
void sell_coffee();
void cups_sold();
void total_coffee_amount();
void revenue();

int coffee_amount = 0;
int small_cup = 0;
int medium_cup = 0;
int large_cup = 0;
float Total_money = 0;

int main()
{
    int choice;

    do
    {
        cin.clear();
        fflush(stdin);

        cout << "________________________________\n";
        cout << "| Choose one of the following: |\n";
        cout << "********************************\n";
        cout << "| 1: How to use                |\n";
        cout << "| 2: Sell Coffee               |\n";
        cout << "| 3: No. of cups sold          |\n";
        cout << "| 4: Total Coffee sold         |\n";
        cout << "| 5: Total money made          |\n";
        cout << "| 6: Exit                      |\n";
        cout << "********************************\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            system("cls");
            how_to_use();
            break;

        case 2:
            system("cls");
            sell_coffee();
            break;

        case 3:
            system("cls");
            cups_sold();
            break;

        case 4:
            system("cls");
            total_coffee_amount();
            break;

        case 5:
            system("cls");
            revenue();
            break;

        case 6:
            system("cls");
            cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
            cout << "%%%% (Thank you for using our software) %%%%\n";
            cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
            break;

        default:
            system("cls");
            cout << "Invalid Input\n";
            break;
        }

    } while (choice != 6);

    return 0;
}

void how_to_use()
{
    cout << "To select an option, enter the option no. and hit enter\n";
}
void sell_coffee()
{
    int choice;
    do
    {
        cin.clear();
        fflush(stdin);

        show_menu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            small_cup++;
            coffee_amount += 9;
            Total_money += 1.75;
            system("cls");
            cout << "Small (9 oz) ------- $1.75   sold\n";
            break;

        case 2:
            medium_cup++;
            coffee_amount += 12;
            Total_money += 1.90;
            system("cls");
            cout << "Medium (12 oz) ----- $1.90   sold\n";
            break;

        case 3:
            large_cup++;
            coffee_amount += 15;
            Total_money += 2.00;
            system("cls");
            cout << "Large (15 oz) ------ $2.00   sold\n";
            break;

        case 4:
            return;
            break;

        default:
            system("cls");
            cout << "Invalid Choice\n";
            break;
        }

    } while (choice != 4);
}
void show_menu()
{
    cout << "__________________________________\n";
    cout << "| Select one of the following    |\n";
    cout << "**********************************\n";
    cout << "| 1: Small (9 oz) ------- $1.75  |\n";
    cout << "| 2: Medium (12 oz) ----- $1.90  |\n";
    cout << "| 3: Large (15 oz) ------ $2.00  |\n";
    cout << "| 4: Exit                        |\n";
    cout << "**********************************\n";
}
void cups_sold()
{
    int choice;
    do
    {
        cin.clear();
        fflush(stdin);

        cout << "__________________\n";
        cout << "| Select the cup |\n";
        cout << "******************\n";
        cout << "| 1: Small       |\n";
        cout << "| 2: Medium      |\n";
        cout << "| 3: Large       |\n";
        cout << "| 4: Exit        |\n";
        cout << "******************\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            system("cls");
            cout << "Total no. of small cups sold are: " << small_cup << endl;
            break;

        case 2:
            system("cls");
            cout << "Total no. of medium cups sold are: " << medium_cup << endl;
            break;

        case 3:
            system("cls");
            cout << "Total no. of large cups sold are: " << large_cup << endl;
            break;

        case 4:
            system("cls");
            return;
            break;

        default:
            system("cls");
            cout << "Invalid Input\n";
            break;
        }

    } while (choice != 4);
}
void total_coffee_amount()
{
    cout << "Total amount of coffee sold is: " << coffee_amount << " oz" << endl;
}
void revenue()
{
    cout << "Total revenue made is: $" << Total_money << endl;
}
