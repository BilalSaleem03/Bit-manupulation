#include<iostream>
using namespace std;

void unrepeating(int arr[], int n)
{
    
    for(int i =0 ; i<n ; i++)
    {
        int count = 0;
        for(int j = 0 ; j < n ; j++)
        {
            if((arr[i] ^ arr[j])==0)
            {
                count++;
            }
        }
        if(count==1)
        {
            cout<<arr[i];
        }
    }
}

int main()
{
    int arr[]={1,2,3,4,3,2,1,2};
    unrepeating(arr,8);
    return 0;
}