#include <iostream>
#include <stdexcept>

class SecureArray {
private:
    int* dataPtr;
    int length;

public:
    SecureArray(int n) {
        this->length = n;
        this->dataPtr = new int[n];
        for (int i = 0; i < n; i++) {
            this->dataPtr[i] = 0;
        }
    }

    ~SecureArray() {
        delete[] this->dataPtr;
    }

    // Overloading '[]' to check array index out of bounds at run time
    int& operator[](int index) {
        if (index < 0 || index >= this->length) {
            throw std::out_of_range("Error: Array index is out of valid bounds.");
        }
        return this->dataPtr[index];
    }

    int getLength() const {
        return this->length;
    }
};

int main() {
    int userSize;
    std::cout << "Define array capacity: ";
    std::cin >> userSize;

    SecureArray myArray(userSize);

    std::cout << "Enter " << userSize << " integers:" << std::endl;
    for (int i = 0; i < userSize; i++) {
        std::cin >> myArray[i];
    }

    std::cout << "Array contents:" << std::endl;
    try {
        for (int i = 0; i < myArray.getLength(); i++) {
            std::cout << "Index [" << i << "]: " << myArray[i] << std::endl;
        }

        // Triggering a run-time bounds check
        std::cout << "Attempting to access out-of-bounds index..." << std::endl;
        std::cout << myArray[userSize]; 
    } 
    catch (const std::out_of_range& e) {
        std::cerr << "Caught Exception: " << e.what() << std::endl;
    }

    return 0;
}