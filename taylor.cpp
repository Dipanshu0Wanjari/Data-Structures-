// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//taylor series

double e(int x, int n)
{
    double s=1;
    int i;
    double num=1;
    double den=1;
    
    for(i=1;i<=n;i++)
    {
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;
}

int main() {
    cout<<e(1,10)<<endl;
    return 0;
}
