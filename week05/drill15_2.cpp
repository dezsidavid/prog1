/* g++ drill15_2.cpp -o main*/

#include "std_lib_facilities.h"

struct Person{
    Person(string first_name, string last_name, int age): my_first_name(first_name), my_last_name(last_name), my_age(age) {
        if (age < 0 || age > 150)
            error("The age is invalid!\n");
        else {
            my_age = age;
        }
        string forbidden{";:\"'[]*&^%$#@!."};
        for (auto c : forbidden) {
            if (first_name.find(c) != string::npos)
                error("The first_name is invalid!\n");
        }

        for (auto c : forbidden) {
            if (last_name.find(c) != string::npos)
                error("The last_name is invalid!\n");
        }
    }
    string first_name() const {return my_first_name;}
    string last_name() const {return my_last_name;}
    int age() const {return my_age;}

private:
    string my_first_name;
    string my_last_name;
    int my_age;
};

ostream &operator<<(ostream &o, Person &p) {
    o << p.first_name() << " " << p.last_name() << " " << p.age() << '\n';
    
    return o;
}

istream &operator>>(istream &i, Person &p) {
    string tmp_first_name;
    string tmp_last_name;
    int tmp_age;

    i >> tmp_first_name >> tmp_last_name >> tmp_age;
    p = Person{tmp_first_name, tmp_last_name, tmp_age};

    return i;
}

int main () {

    Person p ("Goofy", " ", 63);
    cout << p;
    cin >> p;
    cout << p;

    vector<Person> person_vector;
    while (cin >> p)
    {
        person_vector.push_back(p);
    }
    for(Person p : person_vector){
        cout<< p;
    }
}
