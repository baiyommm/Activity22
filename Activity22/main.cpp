#include <iostream>
#include <cstring>
using namespace std;
  
//    char name[]={'c','h','a','t','c','h','a','p','o','n','g',' ','t','h','u','a','y','p','h','a','\0'};
//    cout << name << endl;
//    cout << strlen(name) << endl;
    
//    char firstName[] = "chatchapong";
//    char lastName[] = "thuaypha";
//    // strings lastName = firstName
   
//   strcpy(firstName,lastName);
//    if (strcmp(firstName, lastName) == 0){
//        cout << "They are equal" << endl;
//    }
//    strcat(firstName, lastName);
//    cout << firstName << endl;
    
//    string name = "chatchapong thuaypha";
//    string copy = name.substr();
//    cout << copy << endl;
    
int main() {
    
    char fullName[40];
    char firstName[20];
    char lastName[20];

    cout << "Enter your full name: ";
    cin.getline(fullName, 40);

    // Function to find the space between first and last name, extract the first name
    int i = 0;
    while (fullName[i] != ' ') {
        firstName[i] = fullName[i];
        i++;
    }
    firstName[i] = '\0'; // Null-terminate after first name

    // Copy the last name starting from character after the space
    strcpy(lastName, fullName + i + 1);

    cout << "First name: " << firstName << endl;
    cout << "Last name: " << lastName << endl;

    return 0;
}
