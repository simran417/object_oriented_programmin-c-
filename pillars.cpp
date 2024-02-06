//  pillars of object oriented programming:(encapsulation,inheritance)
#include <iostream>
using namespace std;
/*//encapsulation: wrapping up of data members and functions.
class student{
  private:
  string name;
  int age;
  int roll_no;

  public:
   int getage(){
    return age;
   }

};
int main(){
 student s1;
 cout<<"everything is fine"<<endl;
}*/



// inheritance:
class human{
 public:
 int age;
 int weight;
 string name;
 

 void setage(int a){
    age=a;
 }
};
// in public mode:
// class male:public human{
//     public:
//     string colour;
//    void sleep(){
//    cout<<"male is sleeping"<<endl;
//    } 
// };

// in protected mode:
class male:protected human{
    public:
    string colour;
    int getweight(){
        return this->weight;
    }
};

int main(){
    male m1;
    // cout<<m1.name<<endl;
    // cout<<m1.age<<endl;
    // cout<<m1.colour<<endl;
    
    cout<<m1.getweight()<<endl;
}

