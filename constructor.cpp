//default constructor:
/*#include<iostream>
using namespace std;
class hero{
    private:
    int health;

    public:
    char level;
     
     hero(){
        cout<<"i am constructor"<<endl;
     }

     int gethealth(){
         return health ;
     }
     void sethealth(int h){
        health=h;
     }
};

int main(){
    hero h1;
    h1.level='b';
    h1.sethealth(44);
    cout<<h1.level<< " "<<h1.gethealth()<<endl;
}*/

/*// parameterized constructor:
#include<iostream>
using namespace std;
class hero{
private:
int health;

public:
char level;

hero(int health,char level){
   // cout<<this<<endl;
    this->health = health;
    this->level = level;
}

void print(){
    cout<<"healths "<<health;
    cout<<"level "<<level;
}
int gethealth(){
    return health;
}
void sethealth(int h){
    health=h;
}
};

int main(){
    hero h1(10, 'a');
    h1.print();

}*/

//copy constructor:

/*#include<iostream>
using namespace std;
class hero{
    private:
    int health;

    public:
    char level;
//parametrezied constructor:
    hero(int health,char level){
        this->health=health;
        this->level=level;
    }
//copy constructor:
    hero(hero& temp){
        cout<<"copy constructor"<<endl;
        this->health=temp.health;
         this->level=temp.level;
    }

    void print(){
        cout<<this->health<<endl;
        cout<<this->level<<endl;
    }
    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health=h;
    }
};

int main(){
    hero h1(44,'a');
    hero h2(h1);
    h1.print();
    h2.print();
}*/

#include<iostream>
#include<string.h>
using namespace std;
class hero{
    private:
    int health;

    public:
    char level;
    char *name;

    hero(){
        cout<<"name";
        name =new char[100];
    }
    //copy constructor is used for deep copy:
     hero(hero& temp){
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this->name = ch;
        cout<<"copy constructor"<<endl;
        this->health=temp.health;
         this->level=temp.level;
     }
    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health=h;
    }
    void setname(char name[]){
    strcpy(this->name, name);
    }
    void print(){
        cout<<"shallow copy"<<endl;
        cout<<"name"<<this->name<<endl;
        cout<<"health"<<this->health<<endl;;
        cout<<"level"<<this->level<<endl; 
    }
};
int main(){
    hero h1;
    h1.sethealth(55);
    h1.level='b';
    char name[7] = "simran";
    h1.setname(name);
    h1.print();
    h1.name[0]='c';
    //default copy constructor:
    hero h2(h1);
    h2.print();
}
