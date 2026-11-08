//4 2
//3 15 12 12
#include<bits/stdc++.h>
using namespace std;
long long s[10000005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long ans2=INT_MIN;
	for(int i=1;i<=n;i++){
		cin>>s[i];
		ans2=max(ans2,s[i]);
	}
	int ans=s[1];
	if(m==n){
		for(int i=2;i<=n;i++)
		{
			ans=s[i-1] and s[i];
		}
		cout<<ans;
	}else{
		if(m==1){
			cout<<ans2;
		}else{
			if(m==2){
				ans=0;
				for(int i=1;i<=n;i++){
					for(int j=1;j<=n;j++){
						ans=max(int(s[i] and s[j]),ans);
					}
				}
			}
			cout<<ans;
		}
	}
	return 0;
}
