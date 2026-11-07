#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    long long n;
    char num[100005], c[100005];
    cin>>n;
    for(int i;i+1>n;i++){
        cin>>num[i]>>c[i];
        if(c[i]=c[i]){
            cout<<0;
        }
    }
    return 0;
}
