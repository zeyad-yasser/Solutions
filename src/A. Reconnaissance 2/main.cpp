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



int n; cin>>n; int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
int z=MAX,a,b;
for(int i=0;i<n-1;i++)
{


       if (z >abs(arr[i]-arr[i+1]) ){
           z=abs(arr[i]-arr[i+1]);
           a =i ; b=i+1;
      }

}

    if (z >abs(arr[0]-arr[n-1]) ){

           cout<<1<<" "<<n;
           return 0;
      }

      cout<<a+1<<" "<<b+1;



    return 0;
}
