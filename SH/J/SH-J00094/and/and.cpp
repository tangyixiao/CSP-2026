#include<bits/stdc++.h>
using namespace std;
string to_two(int a){
	string s="";
	while(a>0){
		char cur=a%2+'0';
		s=cur+s;
		a/=2;
	}
	return s;
}
int to_num(string s){
	int ans=0;
	int n=s.length();
	for(int i=n;i>=0;i--){
		ans+=(s[i]-'0')*pow(2,n-i);
	}
	return ans;
}


int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	int ans=0;
	cin>>n>>m;
	int a[n+5];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==n){
		ans=a[1]&a[2];
		for(int i=3;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;return 0;
	} 
	if(m==2){
		ans=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j)continue;
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;return 0;
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
		cout<<ans;return 0;
	}
	if(m==n-1){
		int ans1=0;
		for(int i=1;i<=n;i++){
			if(i==1)ans=a[2]&a[3];
			else if(i==2)ans=a[1]&a[3];
			else ans=a[1]&a[2];
			for(int j=1;j<=n;j++){
				if(i==j)continue;
				ans=ans&a[j];
			}
			ans1=max(ans1,ans);
		}
		cout<<ans1;
		return 0;
	}
	vector<int>am;
	sort(a+1,a+n+1);
	for(int i=n;i>=n-m+1;i--){
		am.push_back(a[i]);
	}
	for(int i=1;i<=m;i++){
		if(i==1){
			ans=am[i];
		}
		else ans=ans&am[i];
	}
	cout<<ans;
	return 0;
}
