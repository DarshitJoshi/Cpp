//Deep copy
#include<iostream>
#include<string.h>
using namespace std;

class Hero{

    int Health;

    public:

    char *name;
    char Level;

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

   Hero(){
    cout<<"Default constructor called!"<<endl;
     name = new char[100];
   }

   Hero(Hero &x){  

    char *ch = new char[strlen(x.name)+1];
    strcpy(ch,x.name);
    this->name = ch;

    cout<<"copy constructor called!"<<endl;
    Health = x.Health;
    Level = x.Level;
   }

   void setName(char name[]){
    strcpy(this->name,name);
   }

   void print(){
    cout<<"\n";
    cout<<"[ Name:"<<this->name<<" , ";
    cout<<"Health:"<<this->Health<<" , ";
    cout<<"Level:"<<this->Level<<" ]";
    cout<<"\n";
   }

   ~Hero(){
    cout<<"Destructor called:"<<endl;
   }

};

int main(){

    Hero hero1;
    
    hero1.setHealth(70);
    hero1.setLevel('A');
    char name[]="Babbar";
    hero1.setName(name);

    hero1.print();
   
   // Use copy constructor
   Hero hero2(hero1);
   //Hero hero2 = hero1;

   hero2.print();

   cout<<"......NOW....."<<endl;

   hero1.name[0]='G';

   hero1.print();
   //hmne hero1 ka name change kiya hero2 ka bhi hogya
   //default copy constructor shallow copy karta hai
   hero2.print();

   
   
   
    return 0 ;
}