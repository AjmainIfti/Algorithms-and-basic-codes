#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of your array : ";
    int n;
    cin>>n;

    cout<<"Enter the elements of the array : ";
    int Data[n], k;
    for(k=0; k<n; k++)
        cin>>Data[k];

    cout<<"Enter the item you wanna search : ";
    int item;
    cin>>item;

    k=0;
    int Loc=-1;
    while(k<n && Loc==-1){
        if(Data[k]==item)
            Loc=k;
        k++;
    }

    if(Loc==-1)
        cout<<"Item not found in the array Data";
    else
        cout<<"Item found : "<<endl<<Loc<<" is the location index of the item"<<endl<<Loc+1<<" is the position of the item in the array Data"<<endl;

    return 0;
}
