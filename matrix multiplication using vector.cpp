#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> a {{4,5,6},{6,3,7},{1,2,3}};
vector<vector<int>> b {{3,7,4},{6,2,1},{4,9,6}};
vector<vector<int>> result {{0,0,0},{0,0,0},{0,0,0}};


int main()
{
    int row1 = 3,col1 = 3,row2 = 3,col2 = 3;           // row,column for two matrix


    for(int i=0;i<row1;i++)                       
    {
        for(int j=0;j<col2;j++)
        {
            for(int k=0;k<col1;k++ )
            {
                result[i][j]+= a[i][k]* b[k][j];

            }

        }
    }
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cout<<result[i][j] << " ";                // display result matrix
        }
        cout<<"\n";
    }


    return 0;
}
