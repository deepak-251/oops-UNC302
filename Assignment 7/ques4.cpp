#include <iostream>
#include <string>

class Student {
protected:
    std::string fullName;
    int registrationID;
    std::string discipline;

public:
    Student(std::string name, int id, std::string field) 
        : fullName(name), registrationID(id), discipline(field) {}

    // Pure virtual function makes this an abstract class
    virtual void processAcademicRecord() = 0;

    virtual void displayInfo() {
        std::cout << "Name: " << this->fullName 
                  << " | ID: " << this->registrationID 
                  << " | Stream: " << this->discipline << std::endl;
    }
    
    virtual ~Student() {}
};

class Engineering : public Student {
public:
    Engineering(std::string name, int id) : Student(name, id, "Engineering") {}

    void processAcademicRecord() override {
        std::cout << "Processing technical credits for Engineering student." << std::endl;
    }
};

class Medicine : public Student {
public:
    Medicine(std::string name, int id) : Student(name, id, "Medicine") {}

    void processAcademicRecord() override {
        std::cout << "Processing clinical rotation hours for Medicine student." << std::endl;
    }
};

class Science : public Student {
public:
    Science(std::string name, int id) : Student(name, id, "Science") {}

    void processAcademicRecord() override {
        std::cout << "Processing laboratory research data for Science student." << std::endl;
    }
};

int main() {
    // Array of pointers of type base class Student
    Student* batch[3];

    batch[0] = new Engineering("Alice Smith", 2021001);
    batch[1] = new Medicine("Bob Johnson", 2021002);
    batch[2] = new Science("Charlie Brown", 2021003);

    for (int i = 0; i < 3; i++) {
        batch[i]->displayInfo();
        batch[i]->processAcademicRecord();
        std::cout << "-----------------------------------" << std::endl;
    }

    // Clean up
    for (int i = 0; i < 3; i++) {
        delete batch[i];
    }

    return 0;
}