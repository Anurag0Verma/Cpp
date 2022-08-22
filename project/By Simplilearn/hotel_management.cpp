#include <iostream>
#include <process.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");

    int quant, choice;
    // Quantity
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodle = 0, Qshake = 0, Qchicken = 0;
    // food items sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodle = 0, Sshake = 0, Schicken = 0;
    // Total proce of items
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodle = 0, Total_shake = 0, Total_chicken = 0;

    cout << "\t Quantity of items we have" << endl;
    cout << "Enter Rooms avalible ";
    cin >> Qrooms;
    cout << "Enter Quantity of pasta ";
    cin >> Qpasta;
    cout << "Enter Quantity of burger ";
    cin >> Qburger;
    cout << "Enter Quantity of noodle ";
    cin >> Qnoodle;
    cout << "Enter Quantity of shake ";
    cin >> Qshake;
    cout << "Enter Quantity of chicken roll ";
    cin >> Qchicken;

m:
    cout << "\n\t\t\t Please select from the menu option" << endl
         << endl;
    cout << "1) Rooms " << endl;
    cout << "2) Pasta " << endl;
    cout << "3) Burger " << endl;
    cout << "4) Noodles " << endl;
    cout << "5) Shake " << endl;
    cout << "6) chicken Roll " << endl;
    cout << "7) Information regarding sales and collection " << endl;
    cout << "8) End " << endl;

    cout << endl
         << endl
         << " Please enter your choice! ";
    cin >> choice;

    switch (choice)
    {

    case 1:
        cout << "\n\n Enter the number of rooms you want ";

        cin >> quant;

        if (Qrooms - Srooms >= quant)
        {
            Srooms = Srooms + quant;
            Total_rooms = Total_rooms + quant * 1200;
            cout << "\n\n\t\t" << quant << " room/rooms have been alloted to you! ";
        }
        else
        {
            cout << "\n\tOnly " << Qrooms - Srooms << " Rooms remaining in hotel";
        }

        break;

    case 2:
        cout << "\n\n Enter pasta quantity ";

        cin >> quant;

        if (Qpasta - Spasta >= quant)
        {
            Spasta = Spasta + quant;
            Total_pasta = Total_pasta + quant * 250;
            cout << "\n\n\t\t" << quant << "Pasta is the order!";
        }
        else
        {
            cout << "\n\tOnly" << Qpasta - Spasta << "Pasta remaining in the hotel";
        }
        break;

    case 3:
        cout << "\n\n Enter burger quantity ";

        cin >> quant;

        if (Qburger - Sburger >= quant)
        {
            Sburger = Sburger + quant;
            Total_burger = Total_burger + quant * 250;
            cout << "\n\n\t\t" << quant << "Burger is the order!";
        }
        else
        {
            cout << "\n\tOnly" << Qburger - Sburger << "Burger remaining in the hotel";
        }
        break;

    case 4:
        cout << "\n\n Enter noodles quantity ";

        cin >> quant;

        if (Qnoodle - Snoodle >= quant)
        {
            Snoodle = Snoodle + quant;
            Total_noodle = Total_noodle + quant * 140;
            cout << "\n\n\t\t" << quant << "Noodles is the order!";
        }
        else
        {
            cout << "\n\tOnly" << Qnoodle - Snoodle << "Noodles remaining in the hotel";
        }
        break;

    case 5:
        cout << "\n\n Enter shake quantity ";

        cin >> quant;

        if (Qshake - Sshake >= quant)
        {
            Sshake = Sshake + quant;
            Total_shake = Total_shake + quant * 120;
            cout << "\n\n\t\t" << quant << "Shake is the order!";
        }
        else
        {
            cout << "\n\tOnly" << Qnoodle - Snoodle << "Shake remaining in the hotel";
        }
        break;

    case 6:
        cout << "\n\n Enter chicken roll quantity ";

        cin >> quant;

        if (Qchicken - Schicken >= quant)
        {
            Schicken = Schicken + quant;
            Total_chicken = Total_chicken + quant * 150;
            cout << "\n\n\t\t" << quant << "Chicken roll is the order!";
        }
        else
        {
            cout << "\n\tOnly" << Qchicken - Schicken << "Chicken rollremaining in the hotel";
        }

        break;

    case 7:
        cout << endl
             << "\t\tDetails of sales and collection" << endl
             << endl;

        cout << "Numbers of rooms we had : " << Qrooms << endl
             << endl;
        cout << "Numbers of rooms we gave for rent : " << Srooms << endl
             << endl;
        cout << "Remaining rooms : " << Qrooms - Srooms << endl
             << endl;
        cout << "Totals rooms collection for the day : " << Total_rooms << endl
             << endl;

        cout << "Numbers of pasta we had : " << Qpasta << endl
             << endl;
        cout << "Numbers of pasta we sold : " << Spasta << endl
             << endl;
        cout << "Remaining pasta : " << Qpasta - Spasta << endl
             << endl;
        cout << "Totals pasta collection for the day : " << Total_pasta << endl
             << endl;

        cout << "Numbers of burger we had : " << Qburger << endl

             << endl;
        cout << "Numbers of burger we sold : " << Sburger << endl
             << endl;
        cout << "Remaining burger : " << Qburger - Sburger << endl
             << endl;
        cout << "Totals burger collection for the day : " << Total_burger << endl
             << endl;

        cout << "Numbers of noodle we had : " << Qnoodle << endl
             << endl;
        cout << "Numbers of noodle we sold : " << Snoodle << endl
             << endl;
        cout << "Remaining noodle : " << Qnoodle - Snoodle << endl
             << endl;
        cout << "Totals noodle collection for the day : " << Total_noodle << endl
             << endl;

        cout << "Numbers of shake we had : " << Qshake << endl
             << endl;
        cout << "Numbers of shake we sold : " << Sshake << endl
             << endl;
        cout << "Remaining shake : " << Qshake - Sshake << endl
             << endl;
        cout << "Totals shake collection for the day : " << Total_shake << endl
             << endl;

        cout << "Numbers of chicken roll we had : " << Qchicken << endl
             << endl;
        cout << "Numbers of chicken roll we sold : " << Schicken << endl
             << endl;
        cout << "Remaining chicken roll : " << Qchicken - Schicken << endl
             << endl;
        cout << "Totals chicken roll collection for the day : " << Total_chicken << endl
             << endl;

             cout<<"total collection of the day"<<Total_burger+Total_chicken+Total_noodle+Total_pasta+Total_rooms+Total_shake<<endl<<endl;
             break;

    case 8:
        return 0;
    default:
        cout << "Please select the numbers mentioned above";
        break;
    }

    goto m;

    return 0;
}