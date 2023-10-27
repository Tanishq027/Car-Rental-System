#include <iostream>
#include <fstream>
#include <iomanip>
#include <unistd.h>
using namespace std;

class customer {
public:
    string customername;
    string carmodel;
    string carnumber;
    char data;
};

class rent : public customer {
public:
    int days = 0;
    int rentalfee = 0;

    void data() {
        int login();
        login();
        cout << "\t\t\t\tPlease Enter your Name: ";
        cin >> customername;
        cout << endl;

        do {
            cout << "\t\t\t\tPlease Select a Car" << endl;
            cout << "\t\t\t\tEnter 'A' for Tesla 20011." << endl;
            cout << "\t\t\t\tEnter 'B' for Hyundai 2015." << endl;
            cout << "\t\t\t\tEnter 'C' for Ford 2017." << endl;
            cout << endl;
            cout << "\t\t\t\tChoose a Car from the above options: ";
            cin >> carmodel;
            cout << endl;
            cout << "--------------------------------------------------------------------------" << endl;

            if (carmodel == "A" || carmodel == "B" || carmodel == "C") {
                break;
            } else {
                cout << "Invalid Car Model. Please try again!" << endl;
            }
        } while (true);

        cout << "Please provide the following information: " << endl;
        cout << "Please select a Car No. : ";
        cin >> carnumber;
        cout << "Number of days you wish to rent the car : ";
        cin >> days;
        cout << endl;
    }

    void calculate() {
        sleep(1);
        system("clear");
        cout << "Calculating rent. Please wait......" << endl;
        sleep(2);
        if (carmodel == "A" || carmodel == "a")
            rentalfee = days * 56;
        if (carmodel == "B" || carmodel == "b")
            rentalfee = days * 60;
        if (carmodel == "C" || carmodel == "c")
            rentalfee = days * 75;
    }

    void showrent() {
        cout << "\n\t\t                       Car Rental - Customer Invoice                  " << endl;
        cout << "\t\t    ////////////////////////////////////////////////////////" << endl;
        cout << "\t\t    | Invoice No. :" << "------------------|" << setw(10) << "#Cnb81353" << " |" << endl;
        cout << "\t\t    | Customer Name:" << "-----------------|" << setw(10) << customername << " |" << endl;
        cout << "\t\t    | Car Model :" << "--------------------|" << setw(10) << carmodel << " |" << endl;
        cout << "\t\t    | Car No. :" << "----------------------|" << setw(10) << carnumber << " |" << endl;
        cout << "\t\t    | Number of days :" << "---------------|" << setw(10) << days << " |" << endl;
        cout << "\t\t    | Your Rental Amount is :" << "--------|" << setw(10) << rentalfee << " |" << endl;
        cout << "\t\t    | Caution Money :" << "----------------|" << setw(10) << "0" << " |" << endl;
        cout << "\t\t    | Advanced :" << "---------------------|" << setw(10) << "0" << " |" << endl;
        cout << "\t\t     ________________________________________________________" << endl;
        cout << "\n";
        cout << "\t\t    | Total Rental Amount is :" << "-------|" << setw(10) << rentalfee << " |" << endl;
        cout << "\t\t     ________________________________________________________" << endl;
        cout << "\t\t     # This is a computer-generated invoice and it does not" << endl;
        cout << "\t\t     require an authorized signature #" << endl;
        cout << " " << endl;
        cout << "\t\t    ////////////////////////////////////////////////////////" << endl;
        cout << "\t\t    You are advised to pay up the amount before the due date." << endl;
        cout << "\t\t    Otherwise, a penalty fee will be applied." << endl;
        cout << "\t\t    ////////////////////////////////////////////////////////" << endl;
        system("PAUSE");
        system("clear");
        ifstream inf("thanks.txt");

        char str[300];

        while (inf) {
            inf.getline(str, 300);
            if (inf) cout << str << endl;
        }
        inf.close();
    }
};

class welcome {
public:
    int welcum() {
        ifstream in("welcome.txt");

        if (!in) {
            cout << "Cannot open the input file.\n";
        }

        char str[1000];
        while (in) {
            in.getline(str, 1000);
            if (in) cout << str << endl;
        }
        in.close();
        sleep(1);
        cout << "\nStarting the program, please wait....." << endl;
        sleep(1);
        cout << "\nLoading up files....." << endl;
        sleep(1);
        system("clear");
    }
};

int main() {
    welcome obj1;
    obj1.welcum();
    rent obj2;
    obj2.data();
    obj2.calculate();
    obj2.showrent();
    return 0;
}

int login() {
    string pass = "";
    char ch;
    cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t       CAR RENTAL SYSTEM \n\n";
    cout << "\t\t\t\t\t------------------------------";
    cout << "\n\t\t\t\t\t\t     LOGIN \n";
    cout << "\t\t\t\t\t------------------------------\n\n";
    cout << "\t\t\t\t\tEnter Password: ";
    ch = cin.get();
    while (ch != '\n') {
        pass.push_back(ch);
        cout << '*';
        ch = cin.get();
    }
    if (pass == "pass") {
        cout << "\n\n\n\t\t\t\t\t\tAccess Granted! \n";
        sleep(1);
        system("clear");
    } else {
        cout << "\n\n\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
        sleep(1);
        system("clear");
        login();
    }
}
