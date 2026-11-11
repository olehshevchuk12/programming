#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
    Animal(const string& name)
        : Name(name)
    {
    }

    const string Name;
};

class Dog : public Animal
{
public:
    Dog(const string& name)
        : Animal(name)
    {
    }

    void Bark()
    {
        cout << Name << " barks: woof!" << endl;
    }
};

int main()
{
    Animal animal("Animal");
    cout << "Animal name: " << animal.Name << endl;

    Dog dog("Rex");

    cout << "Dog name: " << dog.Name << endl;
    dog.Bark();

    return 0;
}