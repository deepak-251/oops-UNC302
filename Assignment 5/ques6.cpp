#include <iostream>
using namespace std;

// base class
class book {
protected:
    string bookTitle;
    string bookAuthor;
    double bookPrice;

public:
    book(string t, string a, double p) {
        bookTitle = t;
        bookAuthor = a;
        bookPrice = p;
    }

    void ShowBookDetails() {
        cout << bookTitle << " " << bookAuthor << " " << bookPrice << endl;
    }
};

// derived class
class textbook : public book {
    string subjectName;

public:
    textbook(string t, string a, double p, string s)
        : book(t, a, p) {
        subjectName = s;
    }

    void ShowTextbookDetails() {
        ShowBookDetails();
        cout << subjectName << endl;
    }
};

int main() {
    cout<<"Deepak Kumar 1024150071"<<endl;
    textbook tb1("physics", "rahul sharma", 650, "mechanics");
    tb1.ShowTextbookDetails();

    return 0;
}