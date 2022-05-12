#include<bits/stdc++.h>

using namespace std;

int partition(vector<int>& unsorted,int start,int end)
{
    int pivot = unsorted[end];
    
    int i = (start - 1);
    
    for(int j=start;j<=end - 1;j++)
    {
        if(unsorted[j]<pivot)
        {
            i++;
            swap(unsorted[i],unsorted[j]);
        }
    }
    swap(unsorted[i+1],unsorted[end]);
    return(i+1);
}


void quick_sort(vector<int>& unsorted,int start,int end)
{
    if(start<end)
    {
        int pi = partition(unsorted,start,end);
    
        quick_sort(unsorted,start,pi-1);
        quick_sort(unsorted,pi+1,end);
        
    }
        
}



int main()
{
    vector<int> unsorted = {10, 80, 30, 90, 40, 50, 70};
    
    
    quick_sort(unsorted,0,6);
    
    for(int a:unsorted)
    {
        cout<<a<<endl;
    }
}
