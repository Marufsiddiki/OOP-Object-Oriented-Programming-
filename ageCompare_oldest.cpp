#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
};

int main() {
    Person people[3] = { Person("Asif", 22), Person("Shakib", 21), Person("Alif", 28) };

    int oldest = 0;

    for (int i = 1; i < 3; i++) {
        if (people[i].getAge() > people[oldest].getAge()) {
            oldest = i;
        }
    }

    cout << "oldest person name: " << people[oldest].getName()
         << "\nAge: " << people[oldest].getAge()<< endl;

    return 0;
}

