#include <iostream>

class STRING {
private:
    char data[500];

public:
    STRING() {
        this->data[0] = '\0';
    }

    STRING(const char* s) {
        int i = 0;
        while (s[i] != '\0' && i < 499) {
            this->data[i] = s[i];
            i++;
        }
        this->data[i] = '\0';
    }

    // Overloading == to compare two strings
    bool operator==(const STRING& other) const {
        int i = 0;
        while (this->data[i] != '\0' || other.data[i] != '\0') {
            if (this->data[i] != other.data[i]) {
                return false;
            }
            i++;
        }
        return true;
    }

    // Overloading + operator for concatenation
    STRING operator+(const STRING& other) const {
        STRING result;
        int i = 0;
        
        while (this->data[i] != '\0') {
            result.data[i] = this->data[i];
            i++;
        }
        
        int j = 0;
        while (other.data[j] != '\0' && i < 499) {
            result.data[i] = other.data[j];
            i++;
            j++;
        }
        result.data[i] = '\0';
        return result;
    }

    void display() const {
        std::cout << this->data << std::endl;
    }
};

int main() {
    STRING s1("Hello");
    STRING s2("World");
    STRING s3("Hello");

    std::cout << "Comparing s1 and s3: ";
    if (s1 == s3) {
        std::cout << "Strings match." << std::endl;
    } else {
        std::cout << "Strings do not match." << std::endl;
    }

    std::cout << "Concatenating s1 and s2: ";
    STRING combined = s1 + s2;
    combined.display();

    return 0;
}