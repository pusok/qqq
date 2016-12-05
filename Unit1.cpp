#include <conio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{
    setlocale (LC_ALL, "RUS");
    const int n=10;
    int a[n], b[n];
    cout <<"Vvedite chisla "<<"\t";
    for(int i = 0;i<n;++i)
        cin>>a[i];
    int j=0;
     for(int i = n-1;i >= 0;--i)
       {bool is = 0;
           for(int k = i-1;k >= 0;--k)
               if (a[i] == a[k]) is = 1;
           if (!is) b[j++] = a[i];
       }
    cout<<"Ydalit povtor elementi\t";
    for(int i = j;i >= 0;--i)
        cout<<b[i]<<" ";
  _getch();
  return 0;
}
