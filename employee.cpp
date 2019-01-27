#include <iostream>
#include <string>
#include <vector>
#include "employee.h"

using namespace std;

int Employee::promote() //увеличивает значение поля "категория" на 1
 {
  m_category = m_category + 1;
  return m_category;
 }

 int Employee::demote()//уеньшает значение поля "категория" на 1
 {
     m_category = m_category - 1;
     return m_category;
 }

int main()
{

    vector<Employee> umichWorks;//Создание вектора

    //Помещаем экземпляры класса в вектор:
    umichWorks.push_back(Employee("Vasya","Pupkin","male","23",3));
    umichWorks.push_back(Employee("Irina","Ivanova","female","25",1));
    umichWorks.push_back(Employee("Roman","Pavlov","male","40",1));
/*
 * Вариант заполнения вектора:
 *   vector<Employee> umichWorks {{"Vasya","Pupkin","male","23",3}, {"Irina","Ivanova","female","25",1}, {"Roman","Pavlov","male","40",1}};
 */
/*
    vector<Employee>::iterator iter = umichWorks.begin();
    vector<Employee>::iterator iter_end = umichWorks.end();
    for( ; iter != iter_end; ++iter )
         cout << *iter << '\n';
*/

// Повысим категорию работнику с именем Irina, найдем этот элемент в векторе

//    char n[] = "Irina";
//    vector<Employee>::iterator it = find(umichWorks.begin(), umichWorks.end(), n);
//    if (it != umichWorks.end())
//    cout << "Name: " << it -> m_name << "Category: " << it -> m_category << endl;



    cout << endl << " Welcome to umichWorks! Here ara our loyal employees: " << endl;
    for (auto employee: umichWorks)
    {
        employee.printInfo();
    }
    
 Employee* vasya = new Employee("Vasya","Pupkin","male","23",3);
 Employee* irina = new Employee("Irina","Ivanova","female","25",1);
 Employee* roman = new Employee("Roman","Pavlov","male","40",1);


  irina->promote();
  vasya->demote();
  roman->demote();

  vasya->printInfo();
  irina->printInfo();
  roman->printInfo();
  delete vasya;
  delete irina;
  delete roman;

}
