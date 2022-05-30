
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


#define mk(arr, n, type)  type *arr=new type[n];
#define Z  ios::sync_with_stdio(0);

vector<pair<int ,int>> items ={{4,1},{4,1},{4,10}};
int solve (int idx ,int ccp ){
    if(idx==items.size())return 0; //base case

    int leave =solve(idx+1,ccp); //in Case it's Better, I will take it
    if(ccp>=items[idx].ss){
        return max(items[idx].ff+solve(idx+1,ccp-items[idx].ss),leave);
    }
    else{
        return leave; // got NO choice
    }
}
int main() {
    Z

   int x,ccp;cin>>x>>ccp;


for(int i=0;i<x;i++){
    int a,b; cin>>a>>b;
    items[i].first=a;
    items[i].second=b;
}
cout<<solve(x,ccp);

    return 0;
}
