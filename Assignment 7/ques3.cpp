#include <iostream>
#include <cmath>

// Equilateral Triangle: Function with one parameter
double calculate_triangle_area(double side) {
    return (std::sqrt(3) / 4) * side * side;
}

// Right Angle Triangle: Function with two parameters
double calculate_triangle_area(double base, double height) {
    return 0.5 * base * height;
}

// Isosceles Triangle: Function with three parameters (base and equal sides)
double calculate_triangle_area(double base, double side_a, double side_b) {
    double semi_perimeter = (base + side_a + side_b) / 2;
    // Using Heron's formula for the general implementation
    return std::sqrt(semi_perimeter * (semi_perimeter - base) * 
                     (semi_perimeter - side_a) * (semi_perimeter - side_b));
}

int main() {
    int choice;
    std::cout << "Select Triangle Type:\n1. Equilateral\n2. Right Angle\n3. Isosceles\nChoice: ";
    std::cin >> choice;

    if (choice == 1) {
        double s;
        std::cout << "Enter side: ";
        std::cin >> s;
        std::cout << "Equilateral Area: " << calculate_triangle_area(s) << std::endl;
    } 
    else if (choice == 2) {
        double b, h;
        std::cout << "Enter base and height: ";
        std::cin >> b >> h;
        std::cout << "Right Angle Area: " << calculate_triangle_area(b, h) << std::endl;
    } 
    else if (choice == 3) {
        double b, s1, s2;
        std::cout << "Enter base and two equal sides: ";
        std::cin >> b >> s1 >> s2;
        std::cout << "Isosceles Area: " << calculate_triangle_area(b, s1, s2) << std::endl;
    } 
    else {
        std::cout << "Invalid selection." << std::endl;
    }

    return 0;
}