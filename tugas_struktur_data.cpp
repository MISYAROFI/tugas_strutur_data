#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
    awal :
int A[100][100];
int n;
system("cls");
cout <<"****************************************"<<endl;
cout <<"        NAMA    : MOHAMMAD ISYAROFI     "<<endl;
cout <<"        NIM     : 5170411366            "<<endl;
cout <<"****************************************"<<endl;
cout << "Input panjang matrik : ";
cin >> n;
//input matrik
for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++)
{
cout << " [ " <<  i << " ] [ " << j << " ] : "; cin >> A[i][j];
        if(i+j==n-1)
        {
            A[i][j]=0;
        }
    }
}
cout<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<setw(2)<<A[i][j];
    }
    cout<<endl;
}
getch();
goto awal;
}
