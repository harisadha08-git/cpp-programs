
#include <iostream>
#include <string>
using namespace std;

// Address structure
struct Address {
    string street;
    string city;
    int pincode;
};

// Food item structure
struct Food {
    string name;
    int quantity;
    int price;
};

// Main order structure
struct Order {
    int orderId;
    string customerName;
    Address address;
    Food items[5];
    int n;
    int total;
};

// Function to generate order ID
int generateID() {
    static int id = 1001;
    return id++;
}

int main() {
    Order o;

    // Generate order ID
    o.orderId = generateID();

    cout << "Enter Customer Name: ";
    getline(cin, o.customerName);

    cout << "Enter Street: ";
    getline(cin, o.address.street);

    cout << "Enter City: ";
    getline(cin, o.address.city);

    cout << "Enter Pincode: ";
    cin >> o.address.pincode;

    cout << "Enter Number of Items (1-5): ";
    cin >> o.n;

    if (o.n < 1 || o.n > 5) {
        cout << "Invalid number of items!";
        return 0;
    }

    o.total = 0;

    // Get food item details
    for (int i = 0; i < o.n; i++) {
        cout << "\nEnter Food Name: ";
        cin >> o.items[i].name;

        cout << "Enter Quantity: ";
        cin >> o.items[i].quantity;

        cout << "Enter Price: ";
        cin >> o.items[i].price;

        o.total = o.total +
                  (o.items[i].quantity * o.items[i].price);
    }

    // Display order details
    cout << "\n----- ORDER DETAILS -----\n";

    cout << "Order ID: " << o.orderId << endl;
    cout << "Customer Name: " << o.customerName << endl;

    cout << "Street: " << o.address.street << endl;
    cout << "City: " << o.address.city << endl;
    cout << "Pincode: " << o.address.pincode << endl;

    cout << "\nOrdered Items:\n";

    for (int i = 0; i < o.n; i++) {
        cout << o.items[i].name << " "
             << o.items[i].quantity << " "
             << o.items[i].price << endl;
    }

    cout << "\nTotal Amount: Rs." << o.total;

    return 0;
}
