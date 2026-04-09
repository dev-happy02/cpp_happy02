#include <iostream>  // for std::cout, std::cin
#include <string>    // for std::string

int main() {
    // --- Variables & data types ---
    int age = 21;
    double gpa = 3.9;
    bool isStudent = true;
    std::string name = "Happy";

    // --- Output ---
    std::cout << "Name: " << name << "\n";
    std::cout << "Age:  " << age  << "\n";
    std::cout << "GPA:  " << gpa  << "\n";

    // --- If / else ---
    if (isStudent) {
        std::cout << name << " is a student.\n";
    } else {
        std::cout << name << " is not a student.\n";
    }

    // --- For loop: print 1 to 5 ---
    for (int i = 1; i <= 5; i++) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    // --- While loop ---
    int count = 3;
    while (count > 0) {
        std::cout << "countdown: " << count-- << "\n";
    }

    return 0;  // 0 = success
}