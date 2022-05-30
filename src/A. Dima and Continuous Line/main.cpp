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
void MOLLTO()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    MOLLTO();

    int n,f(0);cin>>n;  int arr[n]; for(int i=0;i<n;i++)cin>>arr[i];
    int ans[n];
    for(int i=0;i<n-1;i++)
    {
     ans[i]=arr[i+1]-arr[i];
    }

     for(int i=0;i<n;i++)
    {
       // for(int ii=0;ii<n;ii++){
           // if (ans[i]== -1* ans[ii])f=1;
            cout<<ans[i]<<" ";
       // }

    }
  if (f)cout<<"YES";
  else cout<<"NO";











    return 0;
}
