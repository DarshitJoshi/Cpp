//default copy Constructor
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
   

};

Hero :: Hero(){
    cout<<"Default constructor called!"<<endl;
}

Hero :: Hero(int h,char ch){  
    cout<<"parametrized constructor called!"<<endl;
    Health = h;
    Level = ch;

}



int main(){

    Hero ramesh;
    
    ramesh.setHealth(80);
    ramesh.setLevel('A');

    cout<<"Ramesh health is:"<<ramesh.getHealth()<<endl;
    cout<<"Ramesh level is:"<<ramesh.getLevel()<<endl;
    
    Hero R(ramesh); //Default copy constructor

    cout<<"R:"<<endl;
    cout<<"R health is:"<<R.getHealth()<<endl;
    cout<<"R level is:"<<R.getLevel()<<endl;

    return 0 ;
}