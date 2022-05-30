#include <iostream>

using namespace std;

int main()
{
int n;
int x=0;
int v=0;
cin>>n;
int   arr[n];

for (int i=0;i<n;i++)
{
  cin>>arr[i];
  if (arr[i]==-1)
  {
      x++;
  }
}

int countr =0;
for (int i=0;i<n;i++)
{
   if (arr[i]>=2&&arr[i+1]<0)
   {
       int z=i+1;
       while(arr[i]!=0||arr[z]<0)
       {
          arr[i]= arr[i]+arr[z];
           z++;
           countr++;
       }

   }
   else if (arr[i]==1&&arr[i+1]=

   {
       v+=arr[i]+arr[i+1];
   }

}
if (x-(countr+v)>0){cout << x-(countr+v)<< endl;}
else cout <<"0";

    return 0;
}
