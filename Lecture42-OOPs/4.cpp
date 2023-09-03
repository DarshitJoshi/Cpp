//this pointer (jb input and data variable ka name same
//              ho jesa parametrized constructor mai huwa hai niche  )
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

Hero :: Hero(int Health,char Level){  //argument ki <-health ka scope sbse 
                                      // near hai this yha use aata hai
    cout<<"parametrized constructor called!"<<endl;

    //Health = Health; //(dono argument wale Health ko point krenge)
    //Level = Level;

    //Note- this ke andr current object ka address store hota hai

    this->Health = Health;
    this->Level = Level;

    cout<<"Address of suresh using this->:"<<this<<endl;

}

int main(){

    Hero suresh(90,'B');

    cout<<"suresh health is:"<<suresh.getHealth()<<endl;
    cout<<"suresh level is:"<<suresh.getLevel()<<endl;

    cout<<"Address of suresh:"<<&suresh<<endl;
    

    return 0 ;
}