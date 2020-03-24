#include<iostream>
using namespace std;
void printOdd(int limit, int cur)
{
    if(limit>cur-2)
        return;
    else    
    	cout<<limit+1<<" ";
    	printOdd(limit + 2,cur);
}
int main()
{
    int n;
    cin>>n;
    printOdd(n,1); 
    
    return 0;
}
