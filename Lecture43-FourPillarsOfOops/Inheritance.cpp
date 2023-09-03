#include<iostream>
using namespace std;

class human{
    public:
    int height;
    int weight;
    int age;

    void setHeight(int h){
        height = h;
    }
    void setWeight(int w){
        weight = w;
    }
    void setAge(int a){
        age = a;
    }

    int getHeight(){
        return this->height;
    }
    int getWeight(){
        return this->weight;
    }
    int getAge(){
        return this->age;
    }
};

class male : public human{
    public:
    string color;

    void setColor(string c){
        color=c;
    }   

    string getColor(){
        return this->color;
    }
};

int main(){
   male M;

   M.setHeight(164);
   M.setWeight(64);
   M.setAge(19);
   M.setColor("Red");

   cout<<"Height of Male:"<<M.getHeight()<<endl;
   cout<<"Weight of Male:"<<M.getWeight()<<endl;
   cout<<"Age of Male:"<<M.getAge()<<endl;
   cout<<"Color of Male:"<<M.getColor()<<endl;

   male M2;

   M2.setHeight(170);
   M2.setWeight(70);
   M2.age=53;

   return 0;
}