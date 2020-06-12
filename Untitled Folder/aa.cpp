#include <iostream>
#include <cassert>

struct Date {
    
    int day{29};
    int month{8};
    int year{1981};


};


int main {

    Date.date;
//    date.day = 29;
//    date.month = 8;
//    date.year = 1981;


    assert(date.day == 29);
    assert(date.month == 8);
    assert(date.year == 1981);
    
    std::cout << date.day << "/" << date.month << "/" << date.year ;


}
