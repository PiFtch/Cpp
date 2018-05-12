#include "Person.h"

Person::Person(int id, int year, int month, int day) {
    this->id = id;
    this->birthDate = new Date(year, month, day);
}

int Person::getId() {
    return this->id;
}

Date * Person::getBirthDate() {
    return this->birthDate;
}