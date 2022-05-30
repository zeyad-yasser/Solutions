#include <iostream>

using namespace std;

int main()
{
    int x =0, y = 0;
    int m, n;
    cin >> n;
    cin >> m;
    char arr[n][m];

    for (int i = 0; i <n;i++) {
        for (int j = 0; j < m;j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i <n;i++) {
        for (int j = 0; j < m;j++) {
            if (arr[i][j] == 'S')
            {
                x = i; y = j;
            }
        }

    }
    cout << x+1 << " " << y+1<<endl;




    while(arr[x +1][ y+1] != 'O') {



 if (arr[x][y+1] == '*'){
         x=x; y=y+1;
      cout << x +1<< " " << y+1<<endl;
//if (arr[x +1][ y+1] == 'O')

 }


    if (arr[x][y-1] == '*'){
             x=x; y=y-1;
      cout << x +1<< " " << y+1<<endl;
    //  if (arr[x +1][ y+1] == 'O')

 }

     if (arr[x+1][y] == '*'){
             x=x+1; y=y;
      cout << x+1 << " " << y+1<<endl;
      //if (arr[x +1][ y+1] == 'O')

 }

      if (arr[x-1][y] == '*'){
             x=x-1; y=y;
      cout << x +1<< " " << y+1<<endl;
      //if (arr[x +1][ y+1] == 'O')
break;
 }
     }




   for (int i = 0; i < n;i++) {
        for (int j = 0; j < m;j++) {
            if (arr[i][j] == 'O')
        {
               cout << i+1 << " " << j+1<<endl;

        }
        }
   }



 return 0;
    }




















