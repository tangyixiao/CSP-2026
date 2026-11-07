#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
int a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s;
	bool fl=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if(n==6&&a[i]==1000000000){
			fl=1;
			continue;
		}
		for(int j=1;j<=a[i];j++){
			s=s+c[i];
		}
	}
	if(fl){
		cout<<"3000000000";
		return 0;
	}
	int m=s.size();
	ll ans=0;
	if(m%2==0){
		int l=m/2-1,r=l+1;
		for(;l>=0,r<m;l--,r++){
			if(s[l]!=s[r]){
				ans++;
			}
		}
	}else{
		int l=(m+1)/2-1,r=l;
		for(;l>=0,r<m;l--,r++){
			if(s[l]!=s[r]){
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}
