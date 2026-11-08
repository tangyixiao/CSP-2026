#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	string S;
	cin>>n;
	for(int i=1;i<=n;i++){
        int a;
        char c;
        cin>>a>>c;
        for(int j=1;j<=a;j++)    S+=c;
	}
	long long ans=0,t=S.length()/2;
    for(int i=0;i<t;i++){
        if(S[i]!=S[S.length()-i-1])    ans++;
    }
    cout<<ans<<endl;
	return 0;
}
