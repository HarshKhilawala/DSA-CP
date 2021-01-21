#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int sum=0;
    int A[] = {1,2,5,8,9};
    
    for(auto x:A){
        sum+=x;
    }
    
    cout<<sum<<endl;
    return 0;
}
