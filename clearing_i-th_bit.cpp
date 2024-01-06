#include<iostream>
using namespace std;

//method 1
int maskbit(int n , int pos)
{
    int mask = (1<<pos);
    if((n & mask)!=0)
    {
        return (n^mask);
    }
    else{
        return n;
    }
}

//method 2
int maskbit2(int n , int pos)
{
    int mask = ~(1<<pos);
    return (n &mask);
}

int main()
{
    int a = maskbit(5,2);
    int b = maskbit2(5,2);
    cout<<a<<"   "<<b;
    
    return 0;
}