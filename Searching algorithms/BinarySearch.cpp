#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int Data[n];
    cout<<"Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin>>Data[i];

    int item;
    cout<<"Enter the item you want to search: ";
    cin>>item;

    int LB=0, UB=n-1;
    int BEG=LB, END=UB;
    int Loc=-1;

    while (BEG<=END) {
        int MID=(BEG+END)/2;
        if(item<Data[MID])
            END=MID-1;
        else if(item>Data[MID])
            BEG=MID+1;
        else {
            Loc=MID;
            break;
        }
    }

    if(Loc != -1)
        cout<<"Item found at position : "<<Loc+1<<endl;
    else
        cout<<"Item not found"<<endl;

    return 0;
}
