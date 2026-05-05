#include <iostream>

class Polygon {
protected:
    double width, height;

public:
    void set_value(double w, double h) {
        this->width = w;
        this->height = h;
    }
    virtual double calculate_area() = 0;
};

class Rectangle : public Polygon {
public:
    double calculate_area() {
        return this->width * this->height;
    }
};

class Triangle : public Polygon {
public:
    double calculate_area() {
        return 0.5 * this->width * this->height;
    }
};

int main() {
    Polygon* shapePtr = nullptr;
    int selection;

    std::cout << "Select Shape (1: Rectangle, 2: Triangle): ";
    std::cin >> selection;

    if (selection == 1) {
        shapePtr = new Rectangle();
    } else {
        shapePtr = new Triangle();
    }

    shapePtr->set_value(15.0, 10.0);
    
    std::cout << "Calculated Result: " << shapePtr->calculate_area() << std::endl;

    delete shapePtr;
    return 0;
}