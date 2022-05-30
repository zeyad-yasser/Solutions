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
    int With_Out_Zero(int n)
{
    string res="";
    while(n>0)
    {
        if (n%10>0) res+=('0'+n%10);
        n/=10;
    }
    int ans=0;
    for(int i=res.size()-1;i>=0;i--)
        ans=ans*10+res[i]-'0';
    return ans;
}


int main()
{
    MOLLTO();

int a ,b; cin>>a>>b;

(With_Out_Zero(a)+With_Out_Zero(b)==With_Out_Zero(a+b))?cout<<"YES":cout<<"NO"<<el;

//cout<<With_Out_Zero(a+b);
    return 0;
}
