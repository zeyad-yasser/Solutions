#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   int n;cin>>n;
   int prod[100001]={ };
   int arr[100001]={ };
    for (int i=0;i<n ;i++){
    cin>>arr[i];

   }
 int j=1;
   for (int i=0;j<n ;i++){
      prod[i] =arr [i]*arr[j];
   j++;
   }
   sort(prod,prod+(n-1));

bool found  =false;
   for (int k=0;k<n-1 ;k++)
    {
        found=false;
        if (prod[k]==prod[k+1])
              {
                continue;
              }
     else{
        for (int l=0;l<n;l++)
            {


            if(prod[k]==arr[l])
            {
               found=true;
               break;

            }

        }
      }
      if (!found)break;
    }

//cout<<count;


   if(found){
    cout<<"YES";
   }

   else{
    cout <<"NO";
   }

    return 0;
}
