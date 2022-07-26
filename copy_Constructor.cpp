#include <iostream>
#include <string>
using namespace std;

class Person{
    private:
        string name;
        int age;
        char gender;
    public:
        std::string get_name(){return name;}
        int get_age(){return age;}
        char get_gender(){return gender;}
        Person(std::string name_val ="None", int age_val = 0, char gender_val = 'n');
        Person(const Person &source);
        ~Person(); 
      
};

Person::Person(std::string name_val,int age_val, char gender_val)
    :name{name_val}, age{age_val}, gender{gender_val}{
        cout<<"Three arguement constructor";
    }
Person::Person(const Person &source)
    :name{source.name},age{source.age},gender{source.gender}{
        cout<<"Copy constructor of "<<source.name<<endl;
    }
Person::~Person(){
    cout<<"Destructor called for "<<name<<endl;
}
void display_player(Person v){
    cout<<v.get_name()<<endl;
    cout<<v.get_age()<<endl;
    cout<<v.get_gender()<<endl;
}

int main(){
    Person john("John",30,'M');
    Person empty_person(john);  //copy of the John  class
    // Person *esther = new Person{"Esther",18,'F'}; 
    display_player(empty_person);
    Person dan{"Dan"};
    // display_player(*esther);

    return 0;
}
