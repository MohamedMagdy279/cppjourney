#include <iostream>
#include <string>

using namespace std;

// Enumerations
enum enGender { Male, Female };
enum enMaritalStatus { Married, Single, Divorced };
enum enColor { Red, Green, Blue, Yellow };

// Structure definitions

struct stAddress {
    string POBox;
    string ZipCode;
    string StreetName;
    string BuildingNo;
};

struct stContactInfo {
    string Email;
    string Phone;
    stAddress Address;
};

struct stPerson {
    string FirstName;
    string LastName;
    stContactInfo ContactInfo;
    enGender Gender;
    enMaritalStatus MaritalStatus;
    enColor FavouriteColor;
};

int main() {
    // Declare and initialize a person
    stPerson Person1;

    Person1.FirstName = "Ahmed";
    Person1.LastName = "Abu-Hadhoud";

    Person1.ContactInfo.Email = "xyz@xyz.com";
    Person1.ContactInfo.Phone = "+961000000999";

    Person1.ContactInfo.Address.POBox = "7777";
    Person1.ContactInfo.Address.ZipCode = "11194";
    Person1.ContactInfo.Address.StreetName = "Queen1 Street";
    Person1.ContactInfo.Address.BuildingNo = "313";

    Person1.Gender = enGender::Male;
    Person1.MaritalStatus = enMaritalStatus::Married;
    Person1.FavouriteColor = enColor::Green;

    // Output some data to test
    cout << "First Name: " << Person1.FirstName << endl;
    cout << "Last Name: " << Person1.LastName << endl;
    cout << "Email: " << Person1.ContactInfo.Email << endl;
    cout << "Phone: " << Person1.ContactInfo.Phone << endl;
    cout << "PO Box: " << Person1.ContactInfo.Address.POBox << endl;
    cout << "Zip Code: " << Person1.ContactInfo.Address.ZipCode << endl;
    cout << "Street Name: " << Person1.ContactInfo.Address.StreetName << endl;
    cout << "Building No: " << Person1.ContactInfo.Address.BuildingNo << endl;

    // Display enum values using switch or mapping
    cout << "Gender: " 
         << (Person1.Gender == enGender::Male ? "Male" : "Female") 
         << endl;

    cout << "Marital Status: ";
    switch (Person1.MaritalStatus) {
        case enMaritalStatus::Married:   cout << "Married"; break;
        case enMaritalStatus::Single:    cout << "Single"; break;
        case enMaritalStatus::Divorced:  cout << "Divorced"; break;
    }

    cout << "\nFavourite Color: ";
    switch (Person1.FavouriteColor) {
        case enColor::Red:     cout << "Red"; break;
        case enColor::Green:   cout << "Green"; break;
        case enColor::Blue:    cout << "Blue"; break;
        case enColor::Yellow:  cout << "Yellow"; break;
    }

    return 0;
}
