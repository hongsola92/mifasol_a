#include <iostream>
using namespace std;

class Person {
    int id;
    double weight;
    string name;
public:
    Person(int i = 1, string n = "Grace", double w = 20.5);
    void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};
    
Person::Person(int i, string n, double w)
{
    this->id = i;
    this->weight = w;
    this->name = n;
}

int main() {
    Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
    grace.show();
    ashley.show();
    helen.show();
    return 0;
}