#include <bits/stdc++.h>
using namespace std;
int n;
int ai;

int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    string s;
    string ci;
    for(int i=1;i<=n;i++){
        cin>>ai>>ci;
        for(int i=1;i<=ai;i++){
            s+=ci;
        }
    }
    if(n<=1){
        cout<<0;
    }
    return 0;
}
