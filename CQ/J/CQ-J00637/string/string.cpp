#include<bits/stdc++.h>
using namespace std;
#define int long long
int shu[200005];
int s[200005];
int e[200005];
char zi[200005];
int n;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>shu[i]>>zi[i];
	}
	s[1]=1;
	e[1]=shu[1];
	for(int i=2;i<=n;i++){
		s[i]=e[i-1]+1;
		e[i]=s[i]+shu[i]-1;
	}
	int ans=0;
	int endhao=n;
	int endshu=e[n];
	for(int i=1;i<=n;i++){
		if(s[i]<=e[n]/2&&e[i]<=e[n]/2){
			while(s[endhao]>(e[n]+1-e[i])){
				if(zi[i]!=zi[endhao]){
					ans=ans+(endshu-s[endhao]+1);
				}
				endhao--;
				endshu=e[endhao];
			}
			if(zi[i]!=zi[endhao])ans=ans+(endshu-(e[n]+1-e[i])+1);
			endshu=(e[n]+1-e[i]-1);
			if(endshu<s[endhao])endhao--;
		}
		else if(s[i]<=e[n]/2&&e[i]>e[n]/2){
			if(endshu>e[i])ans=ans+(endshu-e[i]);
			break;
		}
		else{
			break;
		}
	}
	cout<<ans;
	return 0;
}
