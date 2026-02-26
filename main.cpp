#include <iostream>
#include "zara.h"
#include "bershka.h"

using namespace std;

int main() {

    int choice;

    cout << "Choose shop:\n";
    cout << "1 - Zara\n";
    cout << "2 - Bershka\n";
    cout << "Your choice: ";
    cin >> choice;

    shop* s = nullptr;

    if (choice == 1) {
        s = new zara();
    }
    else if (choice == 2) {
        s = new bershka();
    }
    else {
        cout << "Wrong choice!\n";
        return 0;
    }

    cout << "\n";
    s->print();

    delete s;

    return 0;
}