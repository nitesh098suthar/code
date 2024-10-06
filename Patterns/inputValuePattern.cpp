// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[3] = {2, 4, 5};
    
//     while()
//     {
//             for(int i=0; i<3; i++)
//             {
//                 for(int j=0; j<1; j++)
//                 {
//                     cout<<"*"<<endl;
//                 }
//             }
//     }
//     return 0;
// }

#include <iostream>
#include <string>

int main() {
    std::string input;
    
    // Get user input as a string
    std::cout << "Enter a number: ";
    std::cin >> input;

    // Find the maximum number of digits in the input
    int maxDigits = 0;
    for (char digit : input) {
        int numAsterisks = digit - '0';
        if (numAsterisks > maxDigits) {
            maxDigits = numAsterisks;
        }
    }

    // Print the asterisks in columns
    for (int i = 0; i < maxDigits; i++) {
        for (char digit : input) {
            int numAsterisks = digit - '0';
            if (numAsterisks > i) {
                std::cout << '*';
            } else {
                std::cout << ' ';
            }
            std::cout << ' ';
        }
        std::cout << std::endl; // Move to the next row
    }

    return 0; // Exit successfully
}


