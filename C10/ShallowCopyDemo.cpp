#include <iostream>
#include "Person.h"
using namespace std;

void displayPerson(Person &person1, Person &person2) {
    cout << "\tperson1 id: " << person1.getId() << endl;
    cout << "\tperson1 birth yeat: " << person1.getBirthDate()->getYear() << endl;
    cout << "\tperson2 id: " << person2.getId() << endl;
    cout << "\tperson2 birth yeat: " << person2.getBirthDate()->getYear() << endl;


}

int main() {
    Person person1(111, 1970, 5, 3);
    Person person2(222, 2000, 11, 8);

    cout << "after creating person1 and person2" << endl;
    displayPerson(person1, person2);

    delete person1.getBirthDate();
    person1 = Person(person2);

    cout << "after copying person2 to person1" << endl;
    displayPerson(person1, person2);

    person2.getBirthDate()->setYear(1963);

    cout << "after modifying person2's birthDate" << endl;
    displayPerson(person1, person2);

    cout << "\n" << (person1.getBirthDate() == person2.getBirthDate());

    return 0;
}