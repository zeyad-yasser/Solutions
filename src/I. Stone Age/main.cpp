#include <bits/stdc++.h>

using namespace std;
#define ff  first
#define ss second
#define mod  1000000007
#define MAX  9999999999
#define el '\n'
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define p push

#define reed   freopen ("input.txt","r",stdin);
#define write  freopen ("output.txt","w",stdout);


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

    int n; cin>>n;
      ll arr_n[n+5]{0};
 ll arr2[n+2]={0};
     for(int j=0;j< n;j++)
        {
         ll x;   cin>>x; arr_n[j]=x; arr2[j]=x*x;
     }

     int q; cin>>q;

     for(int i=0;i<q;i++)
     {
        bool flag =1; ll y,z; cin>>y>>z;
       ll o=-1;
       o= lower_bound(arr2, arr2+n, (z+y))-arr2;
         if (arr_n[o]>0)
            {
                 cout<<arr_n[o]<<el; flag=0;
            }


         if (flag) {cout<<"-1\n";}

     }




    return 0;
}
