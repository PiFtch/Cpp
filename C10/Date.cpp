#include "Date.h"

Date::Date(int year, int month, int day) {
    this->year = year;
    this->month = month;
    this->day = day;
}

int Date::getYear() {
    return this->year;
}

void Date::setYear(int year) {
    this->year = year;
}