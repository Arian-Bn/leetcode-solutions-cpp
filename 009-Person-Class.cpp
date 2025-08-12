#include <iostream>

using namespace std;

/**

    Class: Person
    A simple C++ class representing a person with name, age, and gender.
    Demonstrates encapsulation, constructor overloading, and const-correctness.
    @param name   - person's name (string)
    @param age    - person's age in years (int)
    @param gender - person's gender (string)
    @constructors
        Person() - default: empty name, age 0, gender "unknown"

        Person(const string&, int, const string&) - full initialization

        Person(const string&, int) - gender defaults to "not specified"

    @methods
        set_name/get_name: modify/retrieve name

        set_age/get_age: modify/retrieve age

        set_gender/get_gender: modify/retrieve gender

        introduce(): prints person's information (const method)

    @note All getters and introduce() are const; parameters passed as const references
     */

class Person {
    private:
    string name;
    int age;
    string gender;

    public:
    Person() {
        name = "";
        age = 0;
        gender = "unknown";
    }

    Person(const string& v_name, int v_age, const string& v_gender) {
        name = v_name;
        age = v_age;
        gender = v_gender;
    }

    Person (const string& v_name, int v_age) {
        name = v_name;
        age = v_age;
        gender = "not specified";
    }

    void set_name(const string& value_name) {
        name = value_name;
    }

    string get_name() const {
        return name;
    }

    void set_age(int value_age ) {
        age = value_age;
    }

    int get_age() const {
        return age;
    }

    void set_gender(const string& value_gender) {
        gender = value_gender;
    }

    string get_gender() const {
        return gender;
    }

    void introduce() const {
        cout << "Hello! My name is " << name << ". I'm " << age << " years old. " << gender << endl;
    }
};

int main() {
    Person p1;
    p1.introduce();

    Person p2("Ivan", 22, "Male");
    p2.introduce();

    Person p3("Maria", 25);
    p3.introduce();

    Person p4;
    p4.set_name("Anna");
    p4.set_age(26);
    p4.set_gender("Female");
    p4.introduce();


    return 0;
}