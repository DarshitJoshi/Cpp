//linked list
/* Function available
   1- Push_back()
   2- Push_front()
   3- remove()
   4- remove-if()
   5- reverse()
   6- clear()
   7- size()
   8- swap()
   9- merge()
*/
#include<iostream>
#include<list>
using namespace std;
int main(){

    list<int> l1{1,2,3,4,5};

    for( auto itr = l1.begin() ; itr != l1.end() ; ++itr)
         cout<<*itr<<" ";
    return 0;
}