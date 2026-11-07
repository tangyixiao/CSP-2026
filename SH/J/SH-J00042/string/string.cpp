#include<bits/stdc++.h>
using namespace std;
int n,a[200009];
string s;
int cnt=-1,ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		char c;
		cin>>a[i]>>c;
		cnt+=a[i];
		for(int j=1;j<=a[i];j++){
			s+=c;
		}
	}
	for(int i=0;i<(cnt+1)/2;i++){
		if(s[i]!=s[cnt-i])ans++;
	}cout<<ans;
	return 0;
}

