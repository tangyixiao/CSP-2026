#include<bits/stdc++.h>
using namespace std;
int n,num,cnt,ans;
const int N=2e5+10;
string x;
int a[N];
string s;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>num>>x;
        for(int i=1;i<=num;i++){
            s+=x;
        }
        cnt+=num;
    }
    int len=s.size();
    for(int i=0;i<len/2;i++){
        if(s[i]!=s[len-i-1]){
            ans++;
        }
    }
    cout<<ans;
}
