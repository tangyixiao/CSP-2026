#include<bits/stdc++.h>
using namespace std;

const int N=1e6+50;
char s[N];
char str[N];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	int n;
	int cnt=0;
	cin>>n;
	int yyy=0;
	for(int i=0;i<n;i++){
		long long x;
		char y;
		cin>>x>>y;
		for(int j=cnt;j<x+cnt;j++){
			s[j]=y;
		}
		if(y!=s[0])yyy=1;
		cnt+=x;
	}
	if(yyy=0)cout<<0;

	long long ans=0;
	
	if(cnt%2==1){
		long long l=(cnt-1)/2;
		long long t=0;
		for(int i=l-1;i>=0;i--){
			t++;
			if(s[i]!=s[i+t*2])ans++;
		}
		cout<<ans;
		
		return 0;
	}
	
	if(cnt%2==0){
		long long l=cnt/2;
		long long t=0;
		for(int i=l-1;i>=0;i--){
			t++;
			if(s[i]!=s[i+t*2-1])ans++;
		}
		cout<<ans;
		
		return 0;
	}
	
	return 0;
}