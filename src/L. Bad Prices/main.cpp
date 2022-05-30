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

int t;cin>>t;
 while (t--)
 {

     int n; cin>>n;
     int arr[n+5]; int cnt =0;

     for(int i=1;i<=n;i++){cin>>arr[i];}

     int z=arr[n];


     for (int i=n-1;i>=1;i--)
     {
         if (arr[i]>z){cnt++;}

         else{z=arr[i];}
     }

    cout<<cnt<<"\n";

 }

    return 0;
}
