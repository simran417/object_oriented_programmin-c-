#include<iostream>
using namespace std;

// single inheritance:
/*class animal{
  public:
  string colour;
  int weight;

  void speak(){
    cout<<"speaking"<<endl;
  }
};
class dog:public animal{
    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};

int main(){
    dog d1;
    d1.bark();
    d1.speak();
}*/

// multilevel:

/*class animal{
  public:
  string colour;
  int weight;

  void speak(){
    cout<<"speaking"<<endl;
  }
};
class dog:public animal{
    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};
class puppy:public dog{
    
};

int main(){
    dog d1;
    d1.bark();
   puppy p1;
   p1.bark();

}*/

//multiple inheritance:

/*class animal{
    public:
    string colour;

    void bark(){
        cout<<"barking"<<endl;
    }
};

class human{
 public:
 string name;

 void speak(){
    cout<<"speaking"<<endl;
 }
};

class hybrid: public animal, public human{
 public:
 void Hybrid(){
    cout<<"i m hybrid"<<endl;
 }
};

int main(){
hybrid h1;
h1.bark();
h1.speak();
h1.Hybrid();
}*/

//hierarichcal:

/*class animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class dog: public animal{
    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};

class cat: public animal{
    public:
    void meow(){
        cout<<"meow"<<endl;
    }
};

int main(){
    animal a1;
    a1.speak();

    dog d1;
    d1.bark();
    d1.speak();

    cat c1;
    c1.meow();
    c1.speak();
}*/
 
// hybrid:
 
class animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class hybrid{
    public:
    void fun1(){
        cout<<"function1"<<endl;
    }
};

class dog: public animal{
    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};

class cat: public animal,public hybrid{
    public:
    void meow(){
        cout<<"meow"<<endl;
    }
};

int main(){
    cat c1;
    c1.fun1();
    c1.meow();
}