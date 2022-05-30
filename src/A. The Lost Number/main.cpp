#include <iostream>

using namespace std;

int main()
{

    long long int z;
   int arr[15];
   for (int i=0;i<10;i++)
   {
       cin>>arr[i];
   }

    cin>>z;
bool found=false;
   for (int j=0;j<10;j++)
   {
        if (arr[j]==z){
                found=true;
               break;
           }


   }
   if (found==true){
    cout<<"Found";
   }
   else {
    cout<< "Not Found";
   }


    return 0;
}
