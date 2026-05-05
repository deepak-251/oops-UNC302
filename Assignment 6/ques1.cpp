#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string ISBN;
    friend class Library;
};

class Library {
private:
    static int bookIndex;
    Book B[100];

public:
    bool addNewBook(const std::string& title, const std::string& author, const std::string& ISBN);
    bool removeBooks(const std::string& ISBN);
    void displayDetails();
};

int Library::bookIndex = 0;

bool Library::addNewBook(const std::string& title, const std::string& author, const std::string& ISBN) {
    if (bookIndex < 100) {
        // Accessing class data members using scope resolution operator
        this->B[bookIndex].Book::title = title;
        this->B[bookIndex].Book::author = author;
        this->B[bookIndex].Book::ISBN = ISBN;
        bookIndex++;
        std::cout << "Status: Record Added." << std::endl;
        return true;
    } else {
        std::cout << "Status: Capacity Full." << std::endl;
        return false;
    }
}

bool Library::removeBooks(const std::string& ISBN) {
    for (int i = 0; i < 100; i++) {
        if (B[i].Book::ISBN == ISBN) {
            B[i].Book::title = "";
            B[i].Book::author = "";
            B[i].Book::ISBN = "";
            std::cout << "Status: Record Deleted." << std::endl;
            return true;
        }
    }
    std::cout << "Status: Record Not Found." << std::endl;
    return false;
}

void Library::displayDetails() {
    std::cout << "\nCatalog Listing:" << std::endl;
    for (int i = 0; i < bookIndex; i++) {
        if (B[i].Book::ISBN != "") {
            std::cout << "Book: " << B[i].Book::title 
                      << " | Writer: " << B[i].Book::author 
                      << " | ID: " << B[i].Book::ISBN << std::endl;
        }
    }
}

int main() {
    Library myLib;
    int count;

    std::cout << "Enter count of books (min 5 for demo): ";
    std::cin >> count;
    std::cin.ignore();

    for (int i = 0; i < count; i++) {
        std::string t, a, id;
        std::cout << "Enter Details for Book " << (i + 1) << ":" << std::endl;
        std::getline(std::cin, t);
        std::getline(std::cin, a);
        std::getline(std::cin, id);
        myLib.addNewBook(t, a, id);
    }

    myLib.removeBooks("isbn2");
    myLib.displayDetails();

    return 0;
}