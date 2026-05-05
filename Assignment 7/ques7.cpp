#include <iostream>

class Matrix {
private:
    int r, c;
    int** data;

public:
    Matrix(int rows, int cols) : r(rows), c(cols) {
        this->data = new int*[this->r];
        for (int i = 0; i < this->r; ++i) {
            this->data[i] = new int[this->c];
            for (int j = 0; j < this->c; ++j) {
                this->data[i][j] = 0;
            }
        }
    }

    ~Matrix() {
        for (int i = 0; i < this->r; ++i) {
            delete[] this->data[i];
        }
        delete[] this->data;
    }

    void fillMatrix() {
        std::cout << "Input elements for " << this->r << "x" << this->c << " matrix:" << std::endl;
        for (int i = 0; i < this->r; ++i) {
            for (int j = 0; j < this->c; ++j) {
                std::cin >> this->data[i][j];
            }
        }
    }

    void display() const {
        for (int i = 0; i < this->r; ++i) {
            for (int j = 0; j < this->c; ++j) {
                std::cout << this->data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    // Friend function to multiply two matrices
    friend Matrix operator*(const Matrix& m1, const Matrix& m2);
};

Matrix operator*(const Matrix& m1, const Matrix& m2) {
    if (m1.c != m2.r) {
        std::cout << "Matrix dimensions incompatible for multiplication." << std::endl;
        return Matrix(0, 0);
    }

    Matrix result(m1.r, m2.c);
    for (int i = 0; i < m1.r; ++i) {
        for (int j = 0; j < m2.c; ++j) {
            for (int k = 0; k < m1.c; ++k) {
                result.data[i][j] += m1.data[i][k] * m2.data[k][j];
            }
        }
    }
    return result;
}

int main() {
    int r1, c1, r2, c2;

    std::cout << "Enter rows and cols for Matrix 1: ";
    std::cin >> r1 >> c1;
    Matrix matA(r1, c1);
    matA.fillMatrix();

    std::cout << "Enter rows and cols for Matrix 2: ";
    std::cin >> r2 >> c2;
    Matrix matB(r2, c2);
    matB.fillMatrix();

    if (c1 == r2) {
        Matrix matResult = matA * matB;
        std::cout << "Product Result:" << std::endl;
        matResult.display();
    } else {
        std::cout << "Multiplication not possible." << std::endl;
    }

    return 0;
}