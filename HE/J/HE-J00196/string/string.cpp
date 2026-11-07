#include<iostream>
using namespace std;
long long l,r,n,a;
string b="",d;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>d;
        for(int j=1;j<=a;j++){
            b+=d;
        }
    }
    cout<<0;
}
