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
string END;
 END="End";
ll count=0 ;

ll n; cin>>n;
string st[n+1]={''};
for (ll i=0 ;i<n;i++)
{
    cin>>st[i];

}


for (ll i=0;i<n;i++)
{
    if(st[i+1]=="Header"){cout<<"WA";return 0;}
cout <<END+st[i]<<el;
   if (END+st[i]== st[(n-1)-i])
    {
        count ++;
    }
//n=(n-1)-i;
}
cout <<count <<el;

if (count ==n/2){cout<<"ACC";}
else {cout<<"WA";}



    return 0;
}
Header
Row
EndRow
Cell
EndCell
Table
EndTable
Cell
Row
EndCell
EndRow
EndHeader
