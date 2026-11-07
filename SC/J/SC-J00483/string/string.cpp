#include<iostream>
#include<cstring>
using namespace std;
const int N=2e5+9;
int num1[N],p1,num2[N],p2,n;
int col1[N],col2[N];
long long ans=0;
int main(){ 
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        char ch;
        cin>>num1[i]>>ch;
        col1[i]=col2[n-i+1]=ch;
        num2[n-i+1]=num1[i];
    }
    p1=p2=1;
    while(p1<=n&&p2<=n){
        int mn=min(num1[p1],num2[p2]);
        num1[p1]-=mn;
        num2[p2]-=mn;
        if(col1[p1]!=col2[p2])
            ans+=mn;
        if(!num1[p1])p1++;
        if(!num2[p2])p2++;
    }
    cout<<ans/2;
    return 0;
}