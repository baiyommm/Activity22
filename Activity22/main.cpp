#include <iostream>
#include "header.h"

using namespace std;
using namespace NameExtract;

int main() {
    
    char fullName[40], firstName[20], lastName[20];

    cout << "Enter full name (first and last): ";
    cin.getline(fullName, 40);

    NameExtract::extractNames(fullName, firstName, lastName);

    cout << "First name: " << firstName << endl;
    cout << "Last name: " << lastName << endl;

    return 0;
}
