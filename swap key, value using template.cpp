#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

template <typename T1 ,typename T2>
class pair1{
public :
T1 first;
T2 second ;


   pair1(T1 x, T2 y)
   {
       first = x;                  // assign the value of x,y through constructor
       second =y;
   }

   void swapValue()
   {
       cout<< "value before swapping"<<" "<<first <<" "<< second<<endl;
       auto temp = first;
       T2 first = static_cast<T2>(second) ;                            // cast if the other value are different data type
       T1 second =temp;
       cout<< "value after swapping"<<" "<<first <<" "<< second<<endl;
   }

};


int main()
{
    pair1<int,string> obj(5,"car");
    obj.swapValue();


    return 0;
}
