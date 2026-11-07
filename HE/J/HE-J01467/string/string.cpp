#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","r",stdout);
    long long n,a[100005],cnt=0,c=0;
    string s,t;
    char b[100005];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=b[i];j++){
            s+=a[i];
        }
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=b[i];j++){
            t+=a[i];
        }
    }
    if(s==t){
        cout<<0;
        return 0;
    }else{
        for(int i=1;i<=n;i++){
            if(s[i]!=t[n+1-i]){
                cnt++;
            }
        }

    }
    cout<<cnt;
    fclose(stdin);
    fclose(stdout);
	return 0;
}
