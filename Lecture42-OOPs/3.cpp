//Constructor
#include<iostream>
using namespace std;

class Hero{

    int Health;
    char Level;

    public:

    int getHealth(){
        return Health;
    }

    char getLevel(){
        return Level;
    }

    void setHealth(int h){
        Health = h;
    }

    void setLevel(char ch){
        Level = ch;
    }

    Hero(); //default consturctor
    Hero(int,char); //parametrized constructor
    Hero(Hero&); //copy constuctor

};

Hero :: Hero(){
    cout<<"Default constructor called!"<<endl;
}

Hero :: Hero(int h,char ch){  
    cout<<"parametrized constructor called!"<<endl;
    Health = h;
    Level = ch;

}

Hero :: Hero(Hero &x){  //reference variable
    cout<<"copy constructor called!"<<endl;
    Health = x.Health;
    Level = x.Level;
}



int main(){

    Hero ramesh;
    
    ramesh.setHealth(80);
    ramesh.setLevel('A');

    cout<<"Ramesh health is:"<<ramesh.getHealth()<<endl;
    cout<<"Ramesh level is:"<<ramesh.getLevel()<<endl;

    Hero suresh(90,'B');

    cout<<"suresh health is:"<<suresh.getHealth()<<endl;
    cout<<"suresh level is:"<<suresh.getLevel()<<endl;
    
    //remenber , jese compiler ka default constuctor hota hai phle se hi 
    // wese hi ek default copy constructor hota hai phle se hi
    // lekin hmne yha copy constructor define krdiya hai toh
    //ab wo default copy constructor mar jayega

    Hero R(ramesh);
    cout<<"R health is:"<<R.getHealth()<<endl;
    cout<<"R level is:"<<R.getLevel()<<endl;

    return 0 ;
}