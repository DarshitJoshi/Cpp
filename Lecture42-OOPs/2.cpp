#include<iostream>
using namespace std;

class Hero{   //explicit

    public:
    int health;
    char level;

    Hero();

};

Hero :: Hero(){
    cout<<"Constructor called!"<<endl;
}


int main(){

    Hero ramesh;  //static 

    cout<<"Health of ramesh:"<<ramesh.health<<endl;
    cout<<"Level of ramesh:"<<ramesh.level<<endl;

    Hero *suresh = new Hero;  //dynamic 

    cout<<"Health of suresh:"<<suresh->health<<endl;
    cout<<"Level of suresh:"<<suresh->level<<endl;

    return 0;
}