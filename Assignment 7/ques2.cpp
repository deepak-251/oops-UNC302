#include <iostream>

class Shape {
public:
    virtual void display() = 0;
    virtual double area() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double r;
public:
    Circle(double radius) : r(radius) {}
    
    double area() override {
        return 3.14159 * this->r * this->r;
    }
    
    void display() override {
        std::cout << "Object Type: Circle | Radius: " << this->r << std::endl;
    }
};

class Rectangle : public Shape {
private:
    double l, b;
public:
    Rectangle(double length, double breadth) : l(length), b(breadth) {}
    
    double area() override {
        return this->l * this->b;
    }
    
    void display() override {
        std::cout << "Object Type: Rectangle | Dimensions: " << this->l << "x" << this->b << std::endl;
    }
};

class Triangle : public Shape {
private:
    double b, h;
public:
    Triangle(double base, double height) : b(base), h(height) {}
    
    double area() override {
        return 0.5 * this->b * this->h;
    }
    
    void display() override {
        std::cout << "Object Type: Triangle | Base: " << this->b << " Height: " << this->h << std::endl;
    }
};

int main() {
    Shape* figures[3];

    figures[0] = new Circle(7.5);
    figures[1] = new Rectangle(12.0, 5.0);
    figures[2] = new Triangle(8.0, 10.0);

    for (int i = 0; i < 3; i++) {
        figures[i]->display();
        std::cout << "Computed Area: " << figures[i]->area() << std::endl << std::endl;
        delete figures[i];
    }

    return 0;
}