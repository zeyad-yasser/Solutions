#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n; cin>>n;
    int up=0,low=0;
string wrd;
for (int i=0;i<n;i++)
{

   cin>>wrd;
   for (int i=0;i<wrd.size();i++)
   {
       if (islower (wrd[i]))
        {
        low++;
        }

      else if (isupper (wrd[i]))
        {
          up++;
        }
   }
   if (up<low)
{
    cout<<up<<"\n";
}
  else
    {
        cout<<low<<"\n";
    }

up=0,low=0;
}


    return 0;
}
