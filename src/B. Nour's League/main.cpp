#include <iostream>
#include <map>
using namespace std;

int main()
{ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n ;cin>>n;
 map<string, int>m;

    for (int i=0;i<n;i++)
    {
        string tm;cin>>tm; char p;cin>>p;

       if (p=='W')
       {
          m[tm]+=3;
       }
       if (p=='D')
       {
              m[tm]+=1;
       }
        if (p=='L')
       {
               m[tm]+=0;
       }

    }
    cout <<m.size()<<endl;
     for (auto i=m.begin();i!=m.end();i++)
     {
           cout<<i-> first<<"  "<<i->second<<"\n";

     }



    return 0;
}
