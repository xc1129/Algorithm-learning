/*
 * Author:  Spirit_xc
 * Description: heap date structure
 *
 *
 *
 */

#include <iostream>
using namespace std;


void build_max_heap(int *a);

int main()
{

    int a[10]={16,4,10,14,7,9,3,2,8,1};
    build_max_heap(a);
    for(int i=0;i<10;i++)
        cout<<a[i]<<endl;
    return 0;
}

void max_heapify(int *a,int i)
{
    int largest;
    int left=2*i+1;
    int right=2*i+2;

    if(left<=9 && a[left]>a[i])
    {
        largest=left;
    }
    else
    {
        largest=i;
    }

    if(right<=9 && a[right]>a[largest])
    {
        largest=right;
    }
    
    if(largest!=i)
    {
        cout<<largest<<" ";
        int temp=a[i];
        a[i]=a[largest];
        a[largest]=temp;
        max_heapify(a,largest);
    }
}

void build_max_heap(int *a)
{
    for(int i=4;i>=0;i--)
    {
        max_heapify(a,i);
    }
}
