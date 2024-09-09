#include <iostream>
#include <cstdlib> // Required for exit()

int menu(int a) {
    int choice =a*a;
    return choice;
}

int main() {
    // Calling the menu function
    int a=10;
    a=

    // This code will never be executed due to exit(0) in the menu function
    std::cout << "This line will not be printed because exit() terminates the program.\n";

    return 0;
}
