#include <iostream>
#include <string>
using namespace std;
int main()
{
    string myText = "Hello i am learning C++ from wtf coding";
    cout << "String is: " << myText << "\n";

    string firstName = "Megha";
    string lastName = "Pant";
    string fullName = firstName + lastName;
    cout << "Full Name is: " << fullName << "\n";
    

//   string access....................

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length() << "\n";

    string myString = "Hello";
    cout << myString[0] << "\n";

    string myStringg = "megha";
    myStringg[4] = 'A';
    cout << myStringg << "\n";
    


    return 0;
}