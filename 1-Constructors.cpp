Constructors
- Special Function
- Implicit Call
- NO Return Type
- Same name as class
- Normally used for initialization purpose
- Can be overloaded with parameters
class Student {
public :
     Student (){
       Cout<<"Student Created\n";
     }

};
void main () {
Student st;

}
.........................................
  Initialize Student Class Members Using   Contructor
#include <iostream.h>
#include <string.h>
class Student {
private:
      int id;
      char name[20];
public :
     Student (){
      id=0;
      strcpy(name,"unknown");
       cout<<"Student Created\n";
     }
void print() {
  cout<<id<<endl;
  cout<<name<<endl;
}

};
void main () {
Student st;
st.print();
}
...............................................
                Constructor Overloading
#include <iostream.h>
#include <string.h>
class Student {
private:
      int id;
      char name[20];
public :
     Student (){
      id=0;
      strcpy(name,"unknown");
       cout<<"Student Created\n";
     }
    Student(int d, char n[]){
     id=d;
     strcpy(name,n);
     cout<<"Student Created with Parameter\n";
    }
void print() {
  cout<<id<<endl;
  cout<<name<<endl;
}

};
void main () {
Student st1;
st1.print();
Student st2(10,"Farooq");
st2.print();

}
...............................................






