#include<iostream>
//#include "hero.cpp"
using namespace std;
/*class hero{
    //properties:
    int health;
};
int main(){
    hero h1;
    cout<<sizeof(h1)<<endl;
}*/

/*//empty class:
class hero{

};
int main(){
    hero h1;
    cout<<sizeof(h1)<<endl;
}*/

/*// to use external class
int main(){
    hero h1;
    cout<<sizeof(h1)<<endl;
}*/

/*//to accsess members:
class hero{
    
    private:
    char level;

    public:
    int health;

    char getlevel(){
        return level;
    }
    
    void setlevel(char ch){
        level=ch;
    }

};
int main(){
    hero h1;
    h1.health=55;
    //using setter:
    h1.setlevel('c');
   // h1.level='a';
    cout<<"health is:"<<h1.health<<endl;
   // cout<<"level is:"<<h1.level<<endl;
   cout<<"level is"<<h1.getlevel()<<endl;
   
}*/

//static and dynamic allocation:

class hero{
    
    private:
    char level;

    public:
    int health;

    char getlevel(){
        return level;
    }
    
    void setlevel(char ch){
        level=ch;
    }
};

int main(){
   /*//static allocation:
    hero h1;
    h1.health=44;
    h1.setlevel('a');
    cout<<"health is"<<h1.health<<endl;
    cout<<"levels is"<<h1.getlevel()<<endl;*/

    //dynamic allocation:
    
    
    hero (*b)=new hero;
   /* b->setlevel('c');
    b->health=33;
    cout<<"level is"<<b->getlevel()<<endl;
    cout<<"health is"<<b->health<<endl;*/
   cout<<(*b).health<<endl;
   cout<<(*b).getlevel()<<endl;
   
}