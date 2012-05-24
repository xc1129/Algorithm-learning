/*
 * Author:  Spirit_xc
 * Description: quicksort
 *
 *
 *
 */

#include <iostream>
using namespace std;


void exchange(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int partition(int *a,int p,int r)
{
    int i=p-1;
    int x=a[r];
    for(int j=p;j<r;j++)
    {
       if(a[j]<=x) 
       {
           i++;
           exchange(a[i],a[j]);
       }
    }
    exchange(a[i+1],a[r]);
    return i+1;
}



void quick_sort(int *a,int p,int r)
{
    int q;
    if(p<r)
    {
       q=partition(a,p,r);
       quick_sort(a,p,q-1);
       quick_sort(a,q+1,r);
    }

}
int main()
{
    int a[10]={2,8,7,1,3,5,6,4};
    quick_sort(a,0,7);
    for(int i=0;i<8;i++)
        cout<<a[i]<<endl;
    return 0;
}


