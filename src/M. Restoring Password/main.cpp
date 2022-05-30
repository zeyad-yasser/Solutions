#include <bits/stdc++.h>
using namespace std;
#define ff  first
#define ss second
#define mod  1000000007
#define MAX  9999999999
#define endl '\n'
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define p push


#define mk(arr,n,type)  type *arr=new type[n];
void c_p_c()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    c_p_c();

string lngst ;cin>>lngst ;
string num [10]={};
int arr[100]={};
int j=0,z=0;

for (int i=0;i<10 ;i++)
{
    cin>>num [i];
}
while (j<=70)
{
    for (int i=0;i<10 ;i++)
    {
   if (lngst.substr(j,10)==num[i])
      {
       arr[z]=i;
       z++;
       j+=10;;
       break;
      }

    }

}
for (int i=0;i< ;i++){cout<<arr[i];}







    return 0;
}
