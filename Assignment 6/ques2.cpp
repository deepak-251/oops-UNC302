#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string ISBN;

public:
    Book() {
        this->title = "";
        this->author = "";
        this->ISBN = "";
    }

    Book(std::string title, std::string author, std::string ISBN) {
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
    }

    Book(const Book& obj) {
        this->title = obj.title;
        this->author = obj.author;
        this->ISBN = obj.ISBN;
    }

    void inputInfo() {
        std::cout << "Enter title: ";
        std::getline(std::cin, this->title);
        std::cout << "Enter author: ";
        std::getline(std::cin, this->author);
        std::cout << "Enter ISBN: ";
        std::getline(std::cin, this->ISBN);
    }

    friend class Library;
};

class Library {
private:
    static int bookCount;
    Book collection[100];

public:
    bool addNewBook(const Book& b);
    bool removeBooks(const std::string& ISBN);
    void displayDetails();
};

int Library::bookCount = 0;

bool Library::addNewBook(const Book& b) {
    if (bookCount < 100) {
        this->collection[bookCount].title = b.title;
        this->collection[bookCount].author = b.author;
        this->collection[bookCount].ISBN = b.ISBN;
        bookCount++;
        std::cout << "Successfully added." << std::endl;
        return true;
    }
    return false;
}

bool Library::removeBooks(const std::string& ISBN) {
    for (int i = 0; i < 100; i++) {
        if (this->collection[i].ISBN == ISBN) {
            this->collection[i].title = "";
            this->collection[i].author = "";
            this->collection[i].ISBN = "";
            std::cout << "Successfully removed." << std::endl;
            return true;
        }
    }
    return false;
}

void Library::displayDetails() {
    for (int i = 0; i < bookCount; i++) {
        if (this->collection[i].ISBN != "") {
            std::cout << "Title: " << this->collection[i].title 
                      << " | Author: " << this->collection[i].author 
                      << " | ISBN: " << this->collection[i].ISBN << std::endl;
        }
    }
}

int main() {
    Library myLibrary;

    Book list1[3] = {
        Book("C++ Basics", "Author A", "101"),
        Book("Data Structures", "Author B", "102"),
        Book("Algorithms", "Author C", "103")
    };

    Book* list2 = new Book[2];
    
    for (int i = 0; i < 2; i++) {
        list2[i].inputInfo();
    }

    for (int i = 0; i < 3; i++) {
        myLibrary.addNewBook(list1[i]);
    }
    for (int i = 0; i < 2; i++) {
        myLibrary.addNewBook(list2[i]);
    }

    myLibrary.removeBooks("101");
    myLibrary.displayDetails();

    delete[] list2;
    return 0;
}