#include <iostream>

class Time {
private:
    int h, m, s;

public:
    Time(int hrs = 0, int mins = 0, int secs = 0) {
        this->h = hrs;
        this->m = mins;
        this->s = secs;
    }

    Time operator+(const Time& other) {
        Time result;
        
        int total_seconds = this->s + other.s;
        result.s = total_seconds % 60;
        
        int total_minutes = this->m + other.m + (total_seconds / 60);
        result.m = total_minutes % 60;
        
        result.h = this->h + other.h + (total_minutes / 60);
        
        return result;
    }

    void show() {
        std::cout << this->h << ":" << this->m << ":" << this->s << std::endl;
    }
};

int main() {
    Time t1(5, 15, 34), t2(9, 53, 58), t3;
    t3 = t1 + t2; 
    t3.show();
    
    return 0;
}