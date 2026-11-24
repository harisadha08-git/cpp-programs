
#include <iostream>
#include <string>
using namespace std;

// Structure for address details
struct Address {
    string street;
    string city;
    int pincode;
};

// Structure for customer details
struct Customer {
    int customerId;
    string name;
    Address address;  // Nested structure
};

// Structure for food items
struct FoodItem {
    string itemName;
    int quantity;
    float price;
};

// Structure for order details
struct Order {
    int orderId;
    Customer customer;
    FoodItem items[5];  // Array of food items
    int itemCount;
    float totalAmount;
};

// Function to generate unique order ID
int generateOrderId() {
    static int id = 1001;
    return id++;
}

// Function to display order details
void displayOrder(Order o) {
    cout << "\n----- FOOD ORDER DETAILS -----\n";

    cout << "Order ID: " << o.orderId << endl;
    cout << "Customer ID: " << o.customer.customerId << endl;
    cout << "Customer Name: " << o.customer.name << endl;

    cout << "\nDelivery Address:\n";
    cout << "Street: " << o.customer.address.street << endl;
    cout << "City: " << o.customer.address.city << endl;
    cout << "Pincode: " << o.customer.address.pincode << endl;

    cout << "\nOrdered Items:\n";

    for (int i = 0; i < o.itemCount; i++) {
        cout << o.items[i].itemName
             << " | Quantity: " << o.items[i].quantity
             << " | Price: " << o.items[i].price
             << endl;
    }

    cout << "\nTotal Amount: Rs. " << o.totalAmount << endl;
}

int main() {
    Order o;

    // Generate unique order ID
    o.orderId = generateOrderId();

    // Customer details
    cout << "Enter Customer ID: ";
    cin >> o.customer.customerId;

    cout << "Enter Customer Name: ";
    getline(cin >> ws, o.customer.name);

    // Address details
    cout << "\nEnter Street: ";
    getline(cin, o.customer.address.street);

    cout << "Enter City: ";
    getline(cin, o.customer.address.city);

    cout << "Enter Pincode: ";
    cin >> o.customer.address.pincode;

    // Food item details
    cout << "\nEnter Number of Food Items (1-5): ";
    cin >> o.itemCount;

    if (o.itemCount < 1 || o.itemCount > 5) {
        cout << "Invalid number of items!";
        return 1;
    }

    o.totalAmount = 0;

    for (int i = 0; i < o.itemCount; i++) {
        cout << "\nEnter Item " << i + 1 << " Name: ";
        getline(cin >> ws, o.items[i].itemName);

        cout << "Enter Quantity: ";
        cin >> o.items[i].quantity;

        cout << "Enter Price: ";
        cin >> o.items[i].price;

        o.totalAmount +=
            o.items[i].quantity * o.items[i].price;
    }

    // Display final order
    displayOrder(o);

    return 0;
}
