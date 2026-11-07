#include<bits/stdc++.h>
using namespace std;
string s,ss;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int n,a[200005];
	long long ans=0;
	char c[200005];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if(a[i]%2==0){
			ans+=a[i]/2;
		}
		for(int j=1;j<=a[i];j++){
			s+=c[i];
		}
	}for(int i=s.size()-1;i>=0;i--){
		ss+=s[i];
	}if(ss==s){
		cout<<0;
		return 0;
	}cout<<ans;
	return 0;
}
