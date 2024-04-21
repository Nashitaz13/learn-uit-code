#include <bits/stdc++.h>
using namespace std;

//base class : lop cha
//derived class: class con

class Person{
    private:
        string name, address;
    public:
        string getName(){
            return name;
        }
        string getAddress(){
            return address;
        }
        void setName(string name){
            this->name = name;
        }
        void setAddress(string address){
            this->address = address;
        }
        void in(){
            cout << name << " " << address;
        }
};

class Student : public Person{
    private:
        float gpa;
    public:
        float getGpa(){
            return gpa;
        }
        void setGpa(float gpa){
            this->gpa = gpa;
        }
        //function overriding
        void in(){
            //cout << getName() << " " << getAddress << " " << fixed << setprecision(2) << gpa << endl;
            Person::in();
            cout << fixed << setprecision(2) << gpa << endl;
        }
};

// class Lecturer : public Person{
//     private:
//         double salary;
//     public:
//         double setSalary(){
//             return salary;
//         }
//         void getSalary(double salary){
//             this->salary = salary;
//         }
// };



int main(){
    Student s;
    s.setName("Nguyen Van A");
    s.setAddress("Hai Duong");
    s.setGpa(2.8);
    cout << s.getName() << " " << s.getAddress() << " " << s.getGpa() << endl;
    
}