#include <iostream>
using namespace std;
// Deepak 1024150071
int main() {
    int n;
    cout<<"enter number of days late: ";
    cin>>n;
    if(n <= 5)
        cout<<"fine = 50 paise";
    else if(n <= 10)
        cout<<"fine = 1 rupee";
    else if(n <= 30)
        cout<<"fine = 5 rupees";
    else
        cout<<"membership cancelled";
    return 0;
}
