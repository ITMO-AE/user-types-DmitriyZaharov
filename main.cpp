/*Реализовать класс для человека, поддерживающий историю изменений фамилии и имени*/

#include <iostream>
#include <string>
#include <map>/*контейнер map позволяет хранить данные в виде ключ-значение: ФИО - год*/
#include <vector>
using namespace std;
struct Name{
    string FirstName;
    string LastName;
};

class Person {
public:
    void ChangeFirstName(int year, const string& first_name){
        //факт изменения имени на first_name в год year
        if (ChangeName.count(year) == 0) ChangeName[year].LastName = ""; //если года нет - пустую фамилию
        ChangeName[year].FirstName = first_name;
    }

    void ChangeLastName(int year, const string& last_name){
        //факт изменения фамилии на last_name в год year
        if (ChangeName.count(year) == 0) ChangeName[year].FirstName = ""; //если года нет - пустое имя
        ChangeName[year].LastName = last_name;
    }

    string GetFullName(int year){
        //Получить Имя и Фамилию на конец года
        for(const auto& i : ChangeName){
            if (year < i.first) return "Incognito";// Если искомый год меньше первого года изменения...
            break;
        }

  string firstname = "";
  string lastname = "";

  //Если фамилия и имя не пустые и искомый год больше предыдущего:

  for(const auto& i : ChangeName){

      if(i.first <= year && i.second.LastName != "") lastname = i.second.LastName;
      if(i.first <= year && i.second.FirstName != "") firstname = i.second.FirstName;
  }

 if (firstname == "") return lastname + "with unknown first name";// если имя пустое
 else if (lastname == "") return firstname + "with unknown last name"; // если фамилия пуста
 else return firstname + " " + lastname;
    }
private:
    map<int, Name> ChangeName;//-контейнер, помещаем сразу 2 значения: год и полное имя
};


int main()
{

  Person person;

  person.ChangeFirstName(1965, "Polina");
  person.ChangeLastName(1967, "Sergeeva");
      for (int year : {1900, 1965, 1990}) {
        cout << person.GetFullName(year) << endl;
       }

  person.ChangeFirstName(1970, "Appolinaria");
      for (int year : {1969, 1970}) {
        cout << person.GetFullName(year) << endl;
      }

 person.ChangeLastName(1968, "Volkova");
      for (int year : {1969, 1970}) {
        cout << person.GetFullName(year) << endl;
      }

    return 0;
}
