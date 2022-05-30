#include <iostream>

using namespace std;

int main()
{

    int n;cin>>n;
    int arr  [n];
   long long int  z=0;
bool div=true;
    for  (int i=0; i<n;i++)
    {
       cin>> arr[i];
       z+=arr[i];
    }

    for  (int j=0; j<n;j++)
    {


           if (z% arr[j] !=0)
           {
             div=false;
             break;
           }

    }

   if (div)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }


    return 0;
}
