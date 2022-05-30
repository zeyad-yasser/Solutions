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

   int x; cin>>x;
    char grid [x][x];
for (int i=0; i<x ;i++)
{
    for (int ii=0; ii<x ;ii++)
    {
        cin>>grid[i][ii];
    }

}


for (int i=2; i<x ;i++){
   if (grid[0][0]!=grid[i][i]){
     cout << "NO"; return 0;
   }

}
int h=0;
for (int i=x-1; i>0 ;i--){
   if (grid[0][0]!=grid[i][h]){
     cout << "NO"; return 0;
   }
  h++;
}

int dia=0, cnt=0;
for (int i=0; i<x ;i++)
{
    for (int ii=0; ii<x ;ii++)
    {
        if (grid[i][ii]==grid[0][0]) dia++;
       else if(grid[i][ii]==grid[0][1]) cnt++;
       else {cout<<"NO"; return 0;}
    }

}


if (dia+1==2*x&& cnt==(x*x-((2*x)-1)))

cout<<"YES";

else {cout<<"NO";}

    return 0;
}




