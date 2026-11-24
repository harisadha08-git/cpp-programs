#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, doctor, date;
    string message;

    cout << "Enter Patient Name: ";
    getline(cin, name);

    cout << "Enter Doctor Name: ";
    getline(cin, doctor);

    cout << "Enter Appointment Date: ";
    getline(cin, date);

    // String concatenation
    message = "Hello " + name +
              "! Your appointment with Dr. " +
              doctor + " is scheduled on " + date + ".";

    // String length check
    if (name.length() > 0 && doctor.length() > 0)
    {
        cout << "\nPersonalised Reminder:\n";

        // String replication using loop
        for (int i = 0; i < 40; i++)
        {
            cout << "*";
        }

        cout << "\n" << message << endl;

        for (int i = 0; i < 40; i++)
        {
            cout << "*";
        }

        cout << "\n";

        cout << "\nPatient Name Length: "
             << name.length();

        cout << "\nDoctor Name Length: "
             << doctor.length();
    }
    else
    {
        cout << "\nInvalid Patient or Doctor Name!";
    }

    return 0;
}