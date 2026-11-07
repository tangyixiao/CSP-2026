#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
long long h,l;
int main(){
    freopen("string5.in","r",stdin);
    freopen("string.out","w",stdout);
    long long g;
    cin>>g;
    for(int i=1;i<=g;i++){
        cin>>l>>d;
        for(long long j=1;j<=l;j++){
            a+=d;
        }
    }
    size_t k=a.size()/2;
    if(a.size()%2==0){
        for(long long i=0;i<k;i++){
            b+=a[i];
        }
        for(long long i=a.size()-1;i>=k;i--){
            c+=a[i];
        }
    }
    else{
        for(long long i=0;i<=k;i++){
            b+=a[i];
        }
        for(long long i=a.size()-1;i>=k;i--){
            c+=a[i];
        }
    }
    for(long long i=0;i<b.size();i++){
        if(c[i]!=b[i])h++;
    }
    cout<<h;
    return 0;
}
