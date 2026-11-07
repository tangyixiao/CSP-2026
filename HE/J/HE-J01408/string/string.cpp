#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n,len;
    cin>>n;
    string str;
    for(int i=0;i<n;i++){
        long long u;
        cin>>u;
        string a;
        cin>>a;
        for(int j=0;j<u;j++){
            str+=a;
        }
    }
    int sum=0;
    len=str.size();
    if(len%2==1) len++;
    for(long long i=0;i<str.size();i++){
        if(i>=len/2){
            if(str[str.size()-i-1]!=str[i]) sum++;
        }
    }
    cout<<sum;
    return 0;
}

