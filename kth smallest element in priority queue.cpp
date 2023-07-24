#include <iostream>
#include<vector>
#include<queue>

using namespace std;


int main()
{
    int a[10]={1,4,2,3,8,9,0,11,12,17};
    priority_queue <int> p  ;
    
    cout << "Enter the value to search : "; 
    for(int i=0;i<10;i++)
    {
        p.push(a[i]);                 // enter the array element in to queue
    }

    int k;
    cin >> k;                         // get the kth smallest value
    
    cout << "\nThe smallest element in that value : ";
    
    for(int i=p.size()-1; i>=k;i--)
    {
        p.pop();                          // pop the highest value till the kth element. kth value is the kth smallest element in queue
    }
    cout<<p.top();                      // print the top value which is the kth smallest element


    return 0;
}
