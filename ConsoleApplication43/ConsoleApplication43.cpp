#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>
using namespace std;

class Dog {
private:
    int legs_count;
    int age;
    string action;
    string name;
    string fur_color;
    string eyes_color;

public:
    Dog()
    {
        cout << "КОНСТРУКТОР без параметров!\n";
        SetName("Бобик");
        SetAge(2);
        SetAction("гуляет");
        SetLegs(4);
    }

    Dog(string name, int age)
    {
        cout << "КОНСТРУКТОР С параметрами!\n";
        SetName(name);
        SetAge(age);
        SetAction("гуляет");
        SetLegs(4);
    }

    void SetLegs(int legs) {
        if (legs == 4)
        {
            this->legs_count = legs;
        }
        else
        {
            cout << "Собака не может иметь другое количество ног" << endl;
        }
    }

    int GetLegs() const {
        return this->legs_count;
    }

    void SetName(string name) {
        this->name = name;
    }

    string GetName() const {
        return this->name;
    }

    void SetFurColor(string furColor) {
        this->fur_color = furColor;
    }

    string GetFurColor() const {
        return this->fur_color;
    }

    void SetEyesColor(string eyesColor) {
        this->eyes_color = eyesColor;
    }

    string GetEyesColor() const {
        return this->eyes_color;
    }

    void SetAge(int age)
    {
        if (age >= 0)
        {
            this->age = age;
        }
        else
        {
            cout << "Недопустимое значение (должно быть > 0)!\n";
            throw "ОШИБКА!";
        }
    }

    void SetAction(string action)
    {
        this->action = action;
    }

    string GetAction() const
    {
        return action;
    }

    int GetAge() const
    {
        return age;
    }

    void Bark() {
        cout << "Гав-гав!\n";
    }

    void Walk() {
        cout << "Собака гуляет!\n";
    }

    void Eat(string meal) {
        cout << "Собака ест " << meal << "\n";
    }

    void Sleep() {
        cout << "Собака спит\n";
    }

    void Stare() {
        cout << "Собака смотрит на вас\n";
    }

    void Print() const
    {
        cout << "Имя: " << name << "\n";
        cout << "Возраст: " << age << "\n";
    }
};

int main()
{
    setlocale(0, "");
    Dog myDog;
    myDog.Print();

    Dog anotherDog("Рекс", 3);
    anotherDog.Print();

    return 0;
}
