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

int n,m;
cin>>n>>m;
priority_queue<int>mi;
priority_queue<int>mx;
int maxi=0,mini=0;
for (int i=0 ;i<m;i++){
    int k;cin>>k;
    mi.push(-k);
    mx.push(k);
}

for (int i=0 ;i<n;i++){
   maxi+=mx.top();mx.push(mx.top()-1);mx.pop();
   mini+=(-mi.top());int chk=mi.top();mi.pop();if (chk+1<0)mi.push(chk+1);

}

cout <<maxi<<" "<<mini;
    return 0;
}
