
// C++ Beginner Exercises: All Solutions in One File
// ================================================
// This file contains solutions to all 17 exercises.
// Each exercise has its own main() function and is separated by comments.
// The whole file WON'T compile (multiple mains!), but copy each section to a new .cpp file to run individually.
// Use g++ to compile: g++ exercise_name.cpp -o exercise_name && ./exercise_name
// Personalize placeholders (e.g., your name/age) as needed!

#include <iostream>
#include <string>  // For strings in some exercises

// === Exercise 1: Print "Hello, World!" ===
int main_ex1() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
// Expected: Hello, World!

// === Exercise 2: Print Your Name ===
int main_ex2() {
    std::cout << "Your Name" << std::endl;  // Replace with your actual name
    return 0;
}
// Expected: Your Name

// === Exercise 3: Print Two Lines ===
int main_ex3() {
    std::cout << "Hello!" << std::endl;
    std::cout << "Welcome to C++ programming." << std::endl;
    return 0;
}
// Expected:
// Hello!
// Welcome to C++ programming.

// === Exercise 4: Print a Number ===
int main_ex4() {
    std::cout << 100 << std::endl;
    return 0;
}
// Expected: 100

// === Exercise 5: Print a Message with a Variable ===
int main_ex5() {
    int num = 50;
    std::cout << "The number is " << num << std::endl;
    return 0;
}
// Expected: The number is 50

// === Exercise 6: Simple Math Output ===
int main_ex6() {
    std::cout << (5 + 3) << std::endl;
    return 0;
}
// Expected: 8

// === Exercise 7: Storing and Printing Your Age ===
int main_ex7() {
    int age = 25;  // Replace with your age
    std::cout << "I am " << age << " years old." << std::endl;
    return 0;
}
// Expected: I am 25 years old.

// === Exercise 8: Print a Custom Message ===
int main_ex8() {
    std::cout << "C++ is amazing!" << std::endl;
    return 0;
}
// Expected: C++ is amazing!

// === Exercise 9: Store and Print Favorite Color ===
int main_ex9() {
    std::string color = "Blue";  // Replace with your favorite color
    std::cout << "My favorite color is " << color << "." << std::endl;
    return 0;
}
// Expected: My favorite color is Blue.

// === Exercise 10: Multiply Two Numbers ===
int main_ex10() {
    std::cout << (6 * 7) << std::endl;
    return 0;
}
// Expected: 42

// === Exercise 11: Storing and Printing Temperature ===
int main_ex11() {
    double temp = 22.5;  // Replace with a temperature value
    std::cout << "The temperature is " << temp << " degrees." << std::endl;
    return 0;
}
// Expected: The temperature is 22.5 degrees.

// === Exercise 12: Print Double Quotes in a Message ===
int main_ex12() {
    std::cout << "Learning C++ is \"fun\"!" << std::endl;
    return 0;
}
// Expected Output: Learning C++ is "fun"!

// === Exercise 13: Storing and Printing Two Numbers ===
int main_ex13() {
    int a = 15;
    int b = 25;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    return 0;
}
// Expected Output:
// 15
// 25

// === Exercise 14: Simple Division Output ===
int main_ex14() {
    std::cout << (20 / 4) << std::endl;
    return 0;
}
// Expected Output: 5

// === Exercise 15: Print a Message with Variables ===
int main_ex15() {
    double height = 170.0;  // cm, replace with yours
    double weight = 70.0;   // kg, replace with yours
    std::cout << "My height is " << height << " cm and weight is " << weight << " kg." << std::endl;
    return 0;
}
// Expected Output: My height is 170 cm and weight is 70 kg.

// === Exercise 16: Print a Calculation ===
int main_ex16() {
    std::cout << ((10 + 20) * 2) << std::endl;
    return 0;
}
// Expected Output: 60

// === Exercise 17: Store and Print a Decimal Number ===
int main_ex17() {
    double decimal = 3.14;  // Replace with any decimal
    std::cout << decimal << std::endl;
    return 0;
}
// Expected Output: 3.14

