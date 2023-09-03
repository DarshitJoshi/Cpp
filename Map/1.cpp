/*  Introduction 
    In map,pair of key and values is stored ( Keys cannot be repeated)
    ->Types of Map
             1- Ordered ( Balanced BST) (Keys are in sorted order)
             2- Unordered ( Hashing ) ( No order)


    Multimap
    ( Keys can be repeated and it is same as Map)  
*/

#include<iostream>
#include<map>
using namespace std;
int main(){

   map<int , int > m;

/*  //1. insert()- used for insertion of key value pair in the map 
  map<int , int > m;

  m.insert( {4,5});
  m.insert(make_pair(5,8) );
  m.insert( {4,6}) ; //repetation is not allowed (it will not be printed)

  m[4]=78; //overriding the value of 1st insertion
  m[7] = 43 ; //Insertion is also possible from this

  for ( auto it = m.begin() ; it != m.end() ; it++){
    cout<<it->first<<" "<<(*it).second<<endl;
  }*/

  //2. find() searches for given values in the map


  m.insert( {4,8});

  cout<<m[4]<<endl;  //it will return value at key4;

  m[4] =12;    //changing value at key4;

  cout<<"Now value at key 4 is :"<<m[4];

  



  return 0;
}