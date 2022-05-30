#include <iostream>
#include <algorithm>


using namespace std;

int main()
{
long long a,b,k;
int  count=0;

cin>>a;cin>>b;
     cin>>k;
long long  start = a,end =  b ,mid;

   while (start<=end )
   {
        count ++;

       mid =(start +end )/2;
       if (mid ==k)
       {
           break;
       }
       else if (mid>k)
       {
           end =mid -1;
       }
       else
       {
           start =mid +1;

       }


   }


    cout<<count <<endl;

    return 0;
}
