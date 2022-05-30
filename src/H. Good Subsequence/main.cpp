#include <iostream>
#include <cstring>
using namespace std;

int main()
{

   char word[110];
   char test[110];

   cin>>word;
   cin>>test;
  int lword=0;
  int z=0;
  bool found =false ;
   for (int i=0;word[i]!='\0';i++)
    {
   if (word[i]==test[z])
    {
     z++;
     //z=z+z;
    }
   }
   int v=strlen(test);

//cout<<v;
//cout <<z;
   if (z==v){
    cout<< "YES";
   }
   else{
    cout <<"NO";
   }

}










