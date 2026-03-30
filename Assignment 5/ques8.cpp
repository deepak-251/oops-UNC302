#include <iostream>
using namespace std;

// base class
class libraryuser {
protected:
    string userName;
    int userId;

public:
    libraryuser(string n, int i) {
        userName = n;
        userId = i;
    }
};

// student class
class student : public libraryuser {
    string studentGrade;

public:
    student(string n, int i, string g)
        : libraryuser(n, i) {
        studentGrade = g;
    }

    void ShowStudentInfo() {
        cout << "student: " << userName << " "
             << userId << " grade: " << studentGrade << endl;
    }
};

// teacher class
class teacher : public libraryuser {
    string deptName;

public:
    teacher(string n, int i, string d)
        : libraryuser(n, i) {
        deptName = d;
    }

    void ShowTeacherInfo() {
        cout << "teacher: " << userName << " "
             << userId << " dept: " << deptName << endl;
    }
};

int main() {
    cout<<"Deepak Kumar 1024150071"<<endl;
    student s1("amit", 101, "B");
    teacher t1("dr mehta", 201, "chemistry");

    s1.ShowStudentInfo();
    t1.ShowTeacherInfo();

    return 0;
}