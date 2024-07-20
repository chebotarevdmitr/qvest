#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Person{
  string name;
  string surname;
  int age;		
};

vector<Person> GetMoscowPopulation() {
    vector<Person> moscowPopulation = {
        { "Ivan", "Ivanov", 28 },
        { "Petr", "Petrov", 30 }
    };
    return moscowPopulation;
}
 
void PrintPopulationSize(const vector<Person>& p){
    cout << "There are " << p.size() << " people in Moscow " << endl;
}

int main() {
    vector<Person> people = GetMoscowPopulation();
    PrintPopulationSize(people);
    system("pause>0");
    return 0;
}




