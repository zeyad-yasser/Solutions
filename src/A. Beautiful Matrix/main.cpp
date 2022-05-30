#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int  arr [6][6];

for (int i=1; i<=5;i++)
{
    for (int j=1;j<=5;j++){
    cin>>arr[i][j];
    if (arr[i][j]==1){
        cout<<abs(i-3)+abs(j-3)<<endl;
        break;
    }
    }
}





    return 0;
}

