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

    int n,k ; cin>>n>>k;
    int arr[n]={},key=0;   int o=MAX;
    bool flag=1;

for(int i=1;i<=n;i++)
{
    cin>>arr[i];
   arr[i]+=arr[i-1];

}




for(int i=k;i<=n;i++)
{
    if(o>arr[i]-arr[i-k])
    {
        o=arr[i]-arr[i-k];
        key=i;

    }



}



cout<<key-k+1;


    return 0;
}
