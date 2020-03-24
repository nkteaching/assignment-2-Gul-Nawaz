#include<iostream>
using namespace std;
void printOdd(int cur, int limit)
{
    if(cur>limit)
        return;
    cout<<cur<<" ";
    printOdd(cur + 2, limit);
}
int main()
{
    int n;
    cin>>n;
    printOdd(1,n); 
    
    return 0;
}
