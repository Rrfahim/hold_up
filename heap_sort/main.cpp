//This code was written by rashik reza fahim
// This is heap sort from scratch ,no library function is used
#include <iostream>
using namespace std;

void heapify(int a[],int s,int i)
{
    int largest=i;
    int l=(2*i)+1;
    int r=(2*i)+2;
    if(l<s && a[l]>a[largest])
    {
        largest=l;
    }
    if(r<s && a[r]>a[largest])
    {
        largest=r;
    }
    if(largest!=i)
    {
    swap(a[i],a[largest]);
    heapify(a,s,largest);
    }

}

void show(int a[],int s)
{
    for(int j=0;j<=s-1;j++)
    {
        cout<<a[j]<<" ";
    }
}

int main()
{
    int s;
    cin>>s;
    int a[s];
    for(int i=0;i<=s-1;i++)
    {
        cin>>a[i];
    }
    for(int i=s/2 -1;i>=0;i--)
    {
        heapify(a,s,i);
    }
    int z=s-1;
    while(z>=0)
    {
        swap(a[0],a[z]);
        z--;
        heapify(a,z,0);
    }
    show(a,s);
}
