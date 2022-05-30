#include <iostream>
#include <algorithm>

#include <Windows.h>
#include <cmath>
#include<string>
using namespace std;

int main()
{
    int n;cin>>n;
  int num [n];
  int num2[n];
  for(int i=0;i<n;i++)
  {
      cin>>num[i];
      num[i]=num2[i];
  }


  sort(num2,num2+(n-1));


  // for(int i=0;i<n;i++)
  //{

//      cout <<num2[i]<<" ";
 // }


  //*************************
  int z=0;
  for(int i=0;i<n;i++)
  {
      if (num2[z]==num[i])
        {

         cout<<i+1<<" ";
        z++;
        }
        if(z==2)

        {
            break;
}
    //  else if (num2 [1]==num [i])
    //  {

     //     cout<<i+1<<" ";

     // }
//


  }





    return 0;
}
