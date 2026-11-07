#include<bits/stdc++.h>
#define int long long
using namespace std; 
string s;
int n;
bool check(int x){
	int l=s.size();
	for(int i=0;i<l/2;i++){
		if(s[i]!=s[l-i-1]){
			if(x==0)return false;
			else x--;
		}
	}
	return true;
} 
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	int cnt=0;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		cnt+=a; 
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	if(check(0)){
		cout<<0;
		return 0;
	}
	int l=0,r=cnt,ans=INT_MAX;
	while(l<=r){
		int mid=l+(r-l)/2;
		if(check(mid)){
			l=mid+1;
			ans=min(ans,mid);
		}else{
			r=mid-1;
		}
	}
	cout<<ans;
	return 0;
}
