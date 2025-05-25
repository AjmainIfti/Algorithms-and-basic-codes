#include<iostream>
using namespace std;

void ToH(int n, char BEG, char AUX, char END)
{
    if(n==1)
        cout<<BEG<<" to "<<END<<endl;
    else
    {
        ToH(n-1, BEG, END, AUX);
        cout<<BEG<<" to "<<END<<endl;
        ToH(n-1, AUX, BEG, END);
    }
}

int main()
{
    cout<<"Enter the number of disks : ";
    int n;
    cin>>n;

    ToH(n, 'A', 'B', 'C');

    return 0;
}
