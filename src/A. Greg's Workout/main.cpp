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
int n, z=1; cin>>n;
string arr[]={"zzz","chest", "biceps" ,"back"};
map <string,int>mp;
while (1)
{
    int x;
    if (n) {cin>>x; mp["chest" ] +=x; n--;}
    if (n) {cin>>x; mp["biceps"] +=x; n--;}
    if (n) {cin>>x; mp["back"  ] +=x; n--;}
    if(!n) {break;}

}
if (mp["chest" ]>mp["biceps"] && mp[ "chest"]>mp[ "back" ])cout<<"chest";
if (mp["biceps"]>mp[ "chest"]  && mp["biceps"]>mp[ "back" ])cout<<"biceps";
if (mp[ "back" ]>mp[ "chest"]  && mp[ "back" ]>mp["biceps"])cout<<"back";





    return 0;
}
