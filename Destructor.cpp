#include<iostream>
using namespace std;
class hero{
    private:
    int health;
    public:
    char level;
    hero(){
        cout<<"simple constructor"<<endl;
    }
    void sethealth(int h){
        health =h;
    }
    int gethealth(){
        return health;
    }
    ~hero(){
        cout<<"destructor called"<<endl;
    }

};
int main(){
    //static:
    hero h1;
    h1.level='b';
    h1.sethealth(44);
    cout<<"level "<<h1.level<<endl;
    cout<<"health"<<h1.gethealth()<<endl;
    //dynamically:
    hero *b=new hero();
    //when we create object dynamically we mannualy call the destructor:
    delete b;
}