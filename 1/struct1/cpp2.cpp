#include <iostream>
#include <string>
using namespace std;

struct strInfo
{
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};

void ReadInfo(strInfo &Info)
{
    cout << "Please enter your FirstName?\n";
    cin >> Info.FirstName;

    cout << "Please enter your LastName?\n";
    cin >> Info.LastName;

    cout << "Please enter your Age?\n";
    cin >> Info.Age;

    cout << "Please enter your Phone?\n";
    cin >> Info.Phone;
}

void PrintInfo(strInfo Info)
{
    cout << "First Name: " << Info.FirstName << "\n";
    cout << "Last Name: " << Info.LastName << "\n";
    cout << "Age: " << Info.Age << "\n";
    cout << "Phone: " << Info.Phone << "\n";
}

int main()
{
    strInfo Person1Info;
    ReadInfo(Person1Info);
    PrintInfo(Person1Info);
    return 0;
}
