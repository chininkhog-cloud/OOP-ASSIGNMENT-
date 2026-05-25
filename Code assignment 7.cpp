#include <iostream>
using namespace std;

// Class declaration
class Time {
private:
    int hour;   // 0-23
    int minute; // 0-59
    int second; // 0-59
    
public:
    void printTime();
    void setTime(int, int, int);
};

// Member function definitions
void Time::printTime() {
    cout << hour << ":" << minute << ":" << second;
}

void Time::setTime(int h, int m, int s) {
    hour = (h >= 0 && h < 24) ? h : 0;
    minute = (m >= 0 && m < 60) ? m : 0;
    second = (s >= 0 && s < 60) ? s : 0;
}

// Main function
int main() {
    Time lunchTime;
    Time dinnerTime;
    
    lunchTime.setTime(12, 30, 20);
    dinnerTime.setTime(50, 70, 80);
    
    cout << "Lunch will be held at ";
    lunchTime.printTime();
    cout << endl;
    
    cout << "Dinner will be held at ";
    dinnerTime.printTime();
    cout << endl;
    
    return 0;
}