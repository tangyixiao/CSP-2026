#include<bits/stdc++.h>
using namespace std;
long long s,l;
char u;
string m[10000000];
long long p;
int main(){
    long long p;
    int o;
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>o;
    for(int i=0;i<o;i++){
        cin>>p>>u;
        l+=p;
        for(int j=0;j<p;j++){
            m[j]=u;
        }
    }
    for(int i=0;i<l/2;i++){
        if(m[i]==m[l-1-i]){
            continue;
        }
        s++;
    }
    cout<<s;
    return 0;
}

