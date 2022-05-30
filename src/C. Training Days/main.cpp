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
/*
int main()
{
    c_p_c();


int n; cin>>n;
set<int>s;

for (int i=0;i<n;i++)
    {
        int x;cin>>x;
          s.insert(x);
    }

int i=0; int cnt=0;
for (auto it =s.begin();it!=s.end();it++)
{
    if (it>=i)
    {
        cnt++;
        i++;
    }
    else{ break;}
}


cout<<i;




    return 0;
}

*/



int main()
{

   c_p_c();


   int n; cin>>n; int arr[n+5];

   for (int i=0;i<n;i++){cin>>arr[i];}

    sort(arr,arr+n); int cnt=1;
    for (int i=1;i<n;i++)
    {
        if(arr[i]>cnt){cnt++;}

    }
    cout<<cnt;


}
