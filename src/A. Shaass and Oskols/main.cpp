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

int n;cin>>n;
int arr[110]={-1};

for (int i=1;i<=n;i++)
   {
       cin>>arr[i];
   }

 int m,x,y;cin>>m;
for (int i=1;i<=m;i++)
   {
    cin>>x;cin>>y;
     if (arr[x-1]!=-1)
     {
         arr[x-1]+=((y-1));
     }
     if (arr[x+1]!=-1)
     {
         arr[x+1]+=(arr[x]-y);
     }
    arr[x]=0;

   }
for (int i=1;i<=n;i++)
   {
       cout<<arr[i]<<"\n";
   }




    return 0;
}
