#include<iostream>
#include "Hero.cpp" //new thing to learn (implicit)

using namespace std;

int main(){

    Hero ramesh;  //static allocation of object

    Hero *suresh = new Hero;  //dynamic allocation of object

    ramesh.health = 70;
    ramesh.level = 'A';

    cout<<"Health of ramesh:"<<ramesh.health<<endl;
    cout<<"Level of ramesh:"<<ramesh.level<<endl;

    suresh->health = 100;
    suresh->level = 'A';

    cout<<"Health of suresh:"<<suresh->health<<endl;
    cout<<"Level of suresh:"<<suresh->level<<endl;

    cout<<"Health of suresh:"<<(*suresh).health<<endl;
    cout<<"Level of suresh:"<<(*suresh).level<<endl;

    //NOTE- suresh akele toh address hai na

    return 0;
}