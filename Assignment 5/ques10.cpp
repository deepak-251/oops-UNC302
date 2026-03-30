#include <iostream>
using namespace std;

// base class
class person {
protected:
    string pname;
    string paddress;

public:
    person(string n, string a) {
        pname = n;
        paddress = a;
    }
};

// staff class
class staff : virtual public person {
protected:
    int emp_id;
    string dept;

public:
    staff(string n, string a, int id, string d)
        : person(n, a) {
        emp_id = id;
        dept = d;
    }
};

// student class
class student : virtual public person {
protected:
    int stu_id;
    string grade;

public:
    student(string n, string a, int id, string g)
        : person(n, a) {
        stu_id = id;
        grade = g;
    }
};

// teaching assistant (multiple inheritance)
class teachingassistant : public staff, public student {
public:
    teachingassistant(string n, string a, int eid, string d, int sid, string g)
        : person(n, a),
          staff(n, a, eid, d),
          student(n, a, sid, g) {}

    void showdata() {
        cout << pname << " " << paddress << " "
             << emp_id << " " << dept << " "
             << stu_id << " " << grade << endl;
    }
};

int main() {
    cout<<"Deepak Kumar 1024150071";
    teachingassistant ta1("rahul", "mumbai", 111, "it", 222, "A");
    ta1.showdata();

    return 0;
}