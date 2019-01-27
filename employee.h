#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;
/*
 * Класс -сотрудники
 */

class Employee
{
    string m_name;      //имя
    string m_surname;   //фамилия
    string m_gender;    //пол
    string m_age;       //возраст
    int m_category;     //категория

  public:
    Employee(string name, string surname, string gender, string age, int category)
        : m_name(name), m_surname(surname), m_gender(gender), m_age(age), m_category(category) { }


    void printInfo() {
        cout << m_name << " " << m_surname << " ";
        cout << "gender:" << m_gender << ", age:" << m_age << ", Category:" << m_category << '\n';
    }

    int promote();
    int demote();


//  private:
//    string m_name;
//    string m_surname;
//    string m_gender;
//    string m_age;
//    int m_category;
};


#endif // EMPLOYEE_H
