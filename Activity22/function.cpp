#include "header.h"
#include <cstring>
using namespace std;

namespace NameExtract {

    void extractNames(const char* fullName, char* firstName, char* lastName) {
        int i = 0;
        // Function to extract first name
        while (fullName[i] != ' ') {
            firstName[i] = fullName[i];
            i++;
        }
        firstName[i] = '\0'; // Null-terminate first name

        // Copy the last name starting from character after space
        strcpy(lastName, fullName + i + 1);
    }
}
