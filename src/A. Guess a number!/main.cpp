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

  int n; cin>>n;
  int l= -MAX , r= MAX;
  char s[100],t[100];
  int x;

  for(int i=0 ;i<n ;i++)
  {
      cin>>s>>x>>t;

      if(s[0]=='>' && s[1]=='='){
            if ( t[0] =='Y'){
                l=max(l,x);
            }
            else{
                r=min(r,x-1);
            }
      }

   if (s[0] == '<' && s[1] == '=') {
			if (t[0] == 'Y') {
				r = min(r, x);
			} else {
				l = max(l, x + 1);
			}
		}

		if( s[0]=='<'&& s[1]==0){
                if (t[0]=='Y'){
                    r=min(r,x-1);
                }
                else{
                    l=max(l,x);
                }
        }
        if (s[0] == '>' && s[1] == 0) {
			if (t[0] == 'Y') {
				l = max(l, x + 1);
			} else {
				r = min(r, x);
			}
		}


  }




  if (l > r) {
		cout << "Impossible" << endl;
	} else cout << l << endl;









    return 0;
}
