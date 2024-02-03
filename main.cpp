#include<iostream>
#include <thread>
using namespace std;

extern "C" int addition(int x, int y);
extern "C" int subtraction(int x, int y);
extern "C" int multiplication(int x, int y);
extern "C" int division(int x, int y); 

void sum();
void subtract();
void multiply();
void divide();

int main() {
    system("clear");
    int choice;

    while (true) {
        system("clear");
        cout << "\n\t###########################\n"
             << "\t###       [ MENU ]      ###\n"
             << "\t###########################\n"
             << "\t# 1- [   Adicao         ] #\n"
             << "\t# 2- [   Subtracao      ] #\n"
             << "\t# 3- [   Multiplicacao  ] #\n"
             << "\t# 4- [   Divisao        ] #\n"
             << "\t# 0- [   Sair           ] #\n"
             << "\t###########################\n"
             << "\t => Choose: ";

        cin >> choice;

        switch (choice) {
            case 1:
                sum();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 0:
                return 0;
            default:
                cout << "        Invalid choice. Please try again.\n";
                std::this_thread::sleep_for(std::chrono::milliseconds(2200));
        }
    }

    return 0;
}


void subtract(){
    system("clear");
    int a, b, result, x;
    cout << "\t###########################\n" << 
            "\t###    [ Subtracao ]    ###\n" << 
            "\t###########################\n" <<
            "\t => Insira o numero 1: ";
    cin >> a;
    cout << "\t => Insira o numero 2: ";
    cin >> b;
    system("clear");
    cout << "\t###########################\n" << 
            "\t###    [ Subtracao ]    ###\n" << 
            "\t###########################\n";
    cout << "\t => RESULTADO: " << subtraction(a, b) << endl;
    cout << "\t [1] => Again" << endl;
    cout << "\t [0] => Go to menu" << endl;
    cout << "\t Choose: ";
    cin >> x;
    if (x == 1) {
        subtract();
    } else {
        return;
    }
}

void sum(){
    system("clear");
    int a, b, result, x;
    cout << "\t###########################\n" << 
            "\t###      [ Adicao ]     ###\n" << 
            "\t###########################\n" <<
            "\t => Insira o numero 1: ";
    cin >> a;
    cout << "\t => Insira o numero 2: ";
    cin >> b;
    system("clear");
    cout << "\t###########################\n" << 
            "\t###      [ Adicao ]     ###\n" << 
            "\t###########################\n";
    cout << "\t => RESULTADO: " << addition(a, b) << endl;
    cout << "\t [1] => Again" << endl;
    cout << "\t [0] => Go to menu" << endl;
    cout << "\t Choose: ";
    cin >> x;
    if (x == 1) {
        sum();
    } else {
        return;
    }
}

void multiply(){
    system("clear");
    int a, b, result, x;
    cout << "\t###########################\n" << 
            "\t###  [ Multiplicacao ]  ###\n" << 
            "\t###########################\n" <<
            "\t => Insira o numero 1: ";
    cin >> a;
    cout << "\t => Insira o numero 2: ";
    cin >> b;
    system("clear");
    cout << "\t###########################\n" << 
            "\t###  [ Multiplicacao ]  ###\n" << 
            "\t###########################\n";
    cout << "\t => RESULTADO: " << multiplication(a, b) << endl;
    cout << "\t [1] => Again" << endl;
    cout << "\t [0] => Go to menu" << endl;
    cout << "\t Choose: ";
    cin >> x;
    if (x == 1) {
        multiply();
    } else {
        return;
    }
}

void divide() {
    system("clear");
    int a, b, x;

    cout << "\t###########################\n"
         << "\t###     [ Divisao ]     ###\n"
         << "\t###########################\n"
         << "\t => Insira o divisor: ";

    while (!(cin >> a)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "       Invalid input. Please enter a numeric value: ";
    }

    
    cout << "\t => Insira o quociente: ";
    while (!(cin >> b) || b == 0) {
        
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "       Invalid input. Please enter a non-zero numeric value: ";
    }

    system("clear");
    cout << "\t###########################\n"
         << "\t###     [ Divisao ]     ###\n"
         << "\t###########################\n";
    
    if (b != 0) {
        cout << "\t => RESULTADO: " << division(a, b) << endl;
    } else {
        cout << "\t => Error: Division by zero\n";
    }

    cout << "\t [1] => Again\n"
         << "\t [0] => Go to menu\n"
         << "\t Choose: ";
    cin >> x;

    if (x == 1) {
        divide();
    } else {
        return;
    }
}
