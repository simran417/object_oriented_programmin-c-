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
/*class human{
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
}*/

#include<iostream>
using namespace std;
// polymorphism: many forms: 
// 1.)compile time polymorphism (we can take same name of function if we take different parameters)
// function overloading:
/*class addition{
    public:
    int add(int a, int b){
        return a+b;
    }

    int add(int a,int b,int c){
        return a+b+c;
    }
};
int main(){
   addition a1;
//    a1.add(4,5);
   cout<<a1.add(4,5)<<endl;
//    a1.add(2,4,6);
cout<<a1.add(4,5,7)<<endl;
}*/

// operator overloading:

/*class B{
    public:
    int a;
    int b;
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        int val1=this->a;
        int val2=obj.a;
        cout<<val2-val1<<endl;

    }
};
int main(){
   B obj1;
   B obj2;
   obj1.a=4;
   obj1.a=7;
   obj1+obj2;
}*/

// run time polymorphism:
class animal{
  public:
  void speak(){
    cout<<"speaking"<<endl;
  }
};
class dog: public animal{
 public:
 void speak(){
    cout<<"barking"<<endl;
 }
};

int main(){
    dog d1;
    d1.speak();
}