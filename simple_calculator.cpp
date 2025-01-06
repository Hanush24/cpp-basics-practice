#include <iostream>  // Include the input-output stream library

using namespace std;  // Use the standard namespace

int main() {
    double num1, num2, sum;  // Declare variables to store numbers and result

    // Ask the user for input
    cout << "Enter the first number: ";
    cin >> num1;  // Read the first number from the user

    cout << "Enter the second number: ";
    cin >> num2;  // Read the second number from the user

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Display the result
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;

    return 0;  // Return 0 to indicate the program has run successfully
}