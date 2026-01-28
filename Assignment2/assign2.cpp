// 1. Structure for Student Details.

#include <iostream>
#include <string>
using namespace std;
// Deepak 1024150071

struct Student 
{
    string name;
    int rollNo;
    string degree;
    string hostel;
    float cgpa;
    void addDetails() 
    {
        cout<<"enter name: "<<endl;
        cin>>name;
        cout<<"enter roll no: "<<endl;
        cin>>rollNo;
        cout<<"enter degree: "<<endl;
        cin>>degree;
        cout<<"enter hostel: "<<endl;
        cin>>hostel;
        cout<<"enter CGPA: "<<endl;
        cin>>cgpa;
    }
    void updateDetails() 
    {
        cout<<"enter new name: "<<endl;
        cin>>name;
        cout<<"enter new degree: "<<endl;
        cin>>degree;
    }

    void updateCGPA() 
    {
        cout<<"enter new CGPA: "<<endl;
        cin>>cgpa;
    }

    void updateHostel() 
    {
        cout<<"enter new hostel: "<<endl;
        cin>>hostel;
    }

    void dispDetails() 
    {
        cout<<"student details"<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"roll No: "<<rollNo<<endl;
        cout<<"degree: "<<degree<<endl;
        cout<<"hostel: "<<hostel<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }
};

int main() 
{
    Student s;
    s.addDetails();
    s.dispDetails();
    s.updateDetails();
    s.updateCGPA();
    s.updateHostel();
    s.dispDetails();
    return 0;
}

// 2. Difference Between Public and Private in Question 1 Using Class.

#include <iostream>
#include <string>
using namespace std;
// Deepak 1024150071

class Student 
{
private:
    string name;
    int rollNo;
    float cgpa;

public:
    string degree;
    string hostel;
    void addDetails() 
    {
        cout<<"enter Name: "<<endl;
        cin>>name;
        cout<<"enter roll no: "<<endl;
        cin>>rollNo;
        cout<<"enter CGPA: "<<endl;
        cin>>cgpa;
    }
    void displayDetails() 
    {
        cout<<"Name: " << name<<endl;
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }
};

int main() 
{
    Student s;
    s.addDetails();
    s.displayDetails();
    return 0;
}

// 3. Calling Private Member Function Inside Public Function.

#include <iostream>
using namespace std;
// Deepak 1024150071

class demo 
    {
private:
    void privateFunc() 
    {
        cout<<"this is a private function"<<endl;
    }

public:
    void publicFunc() 
    {
        privateFunc(); 
    }
};

int main() 
{
    demo d;
    d.publicFunc();
    return 0;
}

// 4. Rectangle Class.

#include <iostream>
using namespace std;
// Deepak 1024150071

class Rectangle 
{
    int width;
    int height;

public:
    void getdata() 
    {
        cout<<"enter width and height: ";
        cin>>width;
        cin>>height;
    }

    void calculateArea() 
    {
        cout<<"Area = "<<width*height;
    }
};

int main() 
{
    Rectangle r;
    r.getdata();
    r.calculateArea();
    return 0;
}

// 5. Pass and Return Objects in Complex Class.

#include <iostream>
using namespace std;
// Deepak 1024150071

class Complex 
{
    float real;
    float imag;

public:
    void setComplex(float r,float i) 
    {
        real = r;
        imag = i;
    }

    void dispComplex() 
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }

    Complex add(Complex C) 
    {
        Complex x;
        x.real = real + C.real;
        x.imag = imag + C.imag;
        return x;
    }
};

int main() 
{
    Complex c1, c2, c3;

    c1.setComplex(2.5, 3.5);
    c2.setComplex(1.5, 4.5);

    c3=c1.add(c2);

    cout<<"Sum = ";
    c3.dispComplex();
    return 0;
}

// 6. Implementing Scope Resolution Operator (::).

#include <iostream>
using namespace std;
// Deepak 1024150071

int x = 10;   

class Scope 
{
public:
    static int y;
    void show();
};

int Scope::y = 20;

void Scope::show() 
{
    int x=5;
    cout<<"local x = "<<x<<endl;
    cout<<"global x = "<<::x<<endl;
    cout<<"static y = "<<Scope::y<<endl;
}

int main() 
{
    Scope S;
    S.show();
    return 0;
}

// 7. Namespace Implementation.

#include <iostream>
using namespace std;
// Deepak 1024150071

namespace A 
{
    int x = 10;
    void show() 
    {
        cout<<"namespace A, x = "<<x<<endl;
    }
}

namespace B 
{
    int x = 20;
    void show() 
    {
        cout<<"namespace B, x = "<<x<<endl;
    }
}

int main() 
{
    A::show();
    B::show();
    return 0;
}