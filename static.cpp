#include<iostream>
using namespace std;
class hero{
    private:
    int health;

    public:
    char level;
    static int timeToComplete;

    void sethealth(int h){
        health=h;
    }
    int gethealth(){
        return health;
    }
    static int random(){
       // return health; (show error) it will only access static member;
       return timeToComplete;
    }
};
//initialise static keyword:(no need to create a object)
int hero::timeToComplete = 5;

int main(){
    hero h1;
    cout<<hero::random()<<endl;

    cout<<hero::timeToComplete<<endl;
    //not recomended by this type, but it can run:
    cout<<h1.timeToComplete<<endl;
    hero b;
    b.timeToComplete=10;
    cout<<b.timeToComplete<<endl;
    cout<<h1.timeToComplete<<endl;
}