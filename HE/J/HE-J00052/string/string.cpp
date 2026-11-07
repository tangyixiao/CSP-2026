#include<bits/stdc++.h>
using namespace std;
string a;
long long num;
string shuru;
long long cnt;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;cin >>n;
    for(int i=1;i<=n;i++){
        cin >>num >>shuru;
        for(int i=0;i<num;i++){
            a+=shuru;
        }
    }
    for(long long i=0;i<a.size()/2;i++){
        if(a[i]!=a[a.size()-i-1])cnt++;
    }
    cout <<cnt;



return 0;
}



