#include<iostream>#include <iomanip>using namespace std;int main(){    int i, n;    float a, b;    cin>>n;    for(i = 0;i < n;i++){    cin>>a>>b;    if (a==0 && b==0)     cout<<"0.0"<<endl;    else if(b == 0)    cout<<"divisao impossivel"<<endl;    else if(a == 0)       cout<<"0.0"<<endl;    else    cout<<fixed <<setprecision(1)<<(a/b)<<endl;;    }    return 0;}