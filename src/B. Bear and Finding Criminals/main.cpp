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

int n, a,cnt=0, cnt_0=0; cin>> n>>a;
int arr[1000]={};

for(int i=1; i<=n;i++){cin>>arr[i]; if (arr[i]==0) cnt_0++;}
if (cnt_0==n-1){cout<<"1";return 0;}

if (arr[a]==1){cnt++; }
for (int i=1;i<=n;i++)
{
    if (a+i<=n && a-i>=1){
        if (arr[a+i]==1&&arr[a-i]==1){
            cnt+=2;
        }
    }

    else
    {
        if (a-i>=1){if (arr[a-i]==1)cnt++;}
        if (a+i<=n){if (arr[a+i]==1)cnt++;}
    }



}


cout<<cnt;

    return 0;
}
