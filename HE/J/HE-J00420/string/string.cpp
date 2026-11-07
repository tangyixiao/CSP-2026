#include<bits/stdc++.h>
using namespace std;
long long n,m,b,ans,cnt;
int x[200010];
char y[200010];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x[i]>>y[i];
		if(i>=2){
			if(y[i]!=y[i-1]){
				cnt=1;
			}
		}for(int j=1;j<=x[i];j++){
			s+=y[i];
		}
	}if(cnt==0){
		cout<<0;
		return 0;
	}int u=s.size();
	if(u%2==1){
		for(int i=0;i<=s.size()/2-1;i++){
			if(s[i]!=s[u-i]){
				ans++;
			}
		}cout<<ans;
	}else{
		for(int i=0;i<=s.size()/2;i++){
			if(s[i]!=s[u+i+1]){
				ans++;
			}
		}cout<<ans;
	}
	
	
	
	return 0;
}
