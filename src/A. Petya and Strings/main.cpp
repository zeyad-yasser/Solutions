#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count =0;

    string first ;
   string sec ;


        cin>>first;
        cin>>sec;


     for (int i=0;first[i] != '\0';i++ ){
       first[i]=    tolower( first[i] );
        sec[i]=  tolower( sec[i] );
         sec[i]=  tolower( sec[i] );
    }




   //cout<<first<<endl;
    //cout<<sec;


    if (first == sec)
    {
        cout <<"0";
    }
   else{
    for (int i=0;first[i] != '\0';i++ )
    {
       if (sec[i]<first[i])
       {
            cout <<"1";
        break;
       }

        if (sec[i]>first[i])
           {
               cout <<"-1";
            break;
           }
    }
   }







    return 0;
}
