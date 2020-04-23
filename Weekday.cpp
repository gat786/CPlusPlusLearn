#include "Weekday.h"
#include <iostream>

using namespace std;

class Weekday {

    public:
        string getDayofWeek(int dayNum) {
            switch (dayNum)
            {
            case 1:
                return "Monday";
                break;
            case 2:
                return "Tuesday";
                break;
            case 3:
                return "Wednesday";
                break;
            case 4:
                return "Thursday";
                break;
            case 5:
                return "Friday";
                break;
            case 6:
                return "Saturday";
                break;
            case 7:
                return "Sunday";
                break;
            default:
                return "Invalid Day Given";
                break;
            }
        }
};