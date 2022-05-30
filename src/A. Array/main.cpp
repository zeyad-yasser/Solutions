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


int main()
{
    //MOLLTO();

int n; cin>>n;
vector<int> PO, NE, ZE;

for (int i=0;i<n;i++)
{
    int x;cin>>x;
    if (x<0){ NE.pb(x);}
    if (x>0){ PO.pb(x);}
    if (x==0){ZE.pb(x);}
}


cout<<"1 "<<NE[0]<<el;
if(PO.size()){
cout<<"1 "<<PO[0]<<el;
cout<<ZE.size()+NE.size()+PO.size()-2<<" ";
for(int i=1;i<PO.size();i++)cout<<PO[i]<<" ";
for(int i=1;i<NE.size();i++)cout<<NE[i]<<" ";
for(int i=0;i<ZE.size();i++)cout<<ZE[i]<<" ";
}

if(PO.size()==0){
cout<<"2 "<<NE[1]<<" "<<NE[2]<<el;
cout<<ZE.size()+NE.size()-3<<" ";

for(int i=3;i<NE.size();i++)cout<<NE[i]<<" ";
for(int i=0;i<ZE.size();i++)cout<<ZE[i]<<" ";
}


    return 0;
}
