#include<iostream>
using namespace std;
template<typename t>

void selection(t a[],int n)
{
    int min,temp;
    for(int i=0;i<n;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            min=j;
        }
        t temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    cout<<"Array after sorting : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<",";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter the array length : "<<endl;
    cin>>n;
    int a[n];
    float f[n];
    cout<<"Enter the integer array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element at index "<<i<<" : "<<endl;
        cin>>a[i];
    }
    cout<<"Enter the float array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element at indec "<<i<<" : "<<endl;
        cin>>f[i];
    }
    selection(a,n);
    selection(f,n);
    return 0;
}
