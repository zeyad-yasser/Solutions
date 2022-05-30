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
   int n,sum_1=0,sum_2=0,sum_3=0,z=0;cin>>n;
   int a,b,c;

   for(int i=0;i<n;i++)
   {
       cin>>a>>b>>c;
       sum_1+=a;
       sum_2+=b;
       sum_3+=c;

   }



if (sum_1==0&&sum_2==0&&sum_3==0){cout<<"YES";}
else {cout<<"NO";}


    return 0;
}
