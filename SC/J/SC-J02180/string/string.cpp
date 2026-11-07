#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n;cin>>n;
	string a="";
	int sum;
	while(n--){
		sum=16384;
		int x;char c;cin>>x>>c;
		string ac="";
		if(x>=16384){
			for(int i=1;i<=sum;i++){
				ac+=c;
			}
			while(x>=16384){
				a+=ac;
				x-=16384;
			}
		}
		for(int i=1;i<=x;i++){
			a+=c;
		}
	}
	int ans=0;
	for(int i=0,j=a.length()-1;i<j;i++,j--){
		if(a[i]!=a[j])ans++;
	}
	cout<<ans;
	return 0;
}