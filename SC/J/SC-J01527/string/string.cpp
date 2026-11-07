#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,sum=0;
	string s;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		char c;
		cin>>x>>c;
		sum+=x;
		for(int j=1;j<=x;j++){
			s+=c;
		}
	}
	int f=1;
	for(int i=0;i<n;i++){
		if(s[i]!=s[i+1]){
			f=0;
		}
	}
	if(f==1){
		cout<<0;
		return 0;
	}
	int cnt=sum-1,ans=0;
	if(sum%2==0){
		int mid01=sum/2;
		for(int i=0;i<mid01;i++){
			if(s[i]!=s[cnt]){
				ans++;
			}
			cnt--;
		}
		cout<<ans;
	}else{
		int mid02=(sum+1)/2;
		for(int i=0;i<mid02;i++){
			if(s[i]!=s[cnt]){
				ans++;
			}
			cnt--;
		}
		cout<<ans;
	}
	return 0;
}
