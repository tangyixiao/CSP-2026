#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,mp;
	scanf("%d",&n);
	int m[n];
	char mc[n];
	for(long long i=0;i<n;i++){
		scanf("%d%c",&m[i],&mc[i]);
	}
	for(int i=10000;i>=0;i--){
		int y=1;
		for(int j=0;j<n;j++){
			if(m[j]%i!=0)y=0;
		}
		if(y==1){
			for(int j=0;j<n;j++)m[j]/=i;
			mp=i;
			break;
		}
	}
	long long a=0,ans=0;
	for(long long i=0;i<n;i++){
		a+=m[i];
	}
	vector<char> s;
	for(int i=0;i<n;i++){
		for(int j=0;j<m[i];j++){
			s.push_back(mc[i]);
		}
	}
	for(long long i=0;i<a/2;i++){
		if(s[i]!=s[a-i-1])ans++;
	}
	printf("%lld",ans*mp);
	return 0;
} 