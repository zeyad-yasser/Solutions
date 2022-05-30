#include <iostream>

using namespace std;

int main()
{
    int k=0;
    int red=0;
    int blue=0;
    int green=0;

    char color[110];
    cin>>color;
    for(int i =0;color[i]!='\0';i++)
    {
     if (color[i]=='R'){
            red++;
        }

        else if (color[i]=='G'){
            green++;
        }
        else if (color[i]=='B'){
            blue++;
        }

    }



    cout<<"Red stones = "<<red<<endl;

cout<<"Blue stones = "<<blue<<endl;
cout<<"Green stones = "<<green<<endl;



    return 0;
}
