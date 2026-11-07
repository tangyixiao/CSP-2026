#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string ss,s,s1;
	long long n,cnt=0,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		char c;
		long long a;
		cin>>a>>c;
		cnt+=a;
		for(int j=1;j<=a;j++)ss+=c;
	}
	if(cnt%2==0){
		cnt/=2;
		for(int i=cnt-1;i>=0;i--)s+=ss[i];
		for(int i=cnt;i<=(cnt*2)-1;i++)s1+=ss[i];
		for(int i=1;i<=s.size();i++){
			if(s[i]!=s1[i])ans++;
		}
	}
	else {
		cnt/=2;
		for(int i=cnt;i>=0;i--)s+=ss[i];
		for(int i=cnt;i<=(cnt*2);i++)s1+=ss[i];
		for(int i=1;i<=s.size();i++){
			if(s[i]!=s1[i])ans++;
		}
	}
	cout<<ans;
	return 0;
}