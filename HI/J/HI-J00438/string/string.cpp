#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long m;
	string h,s;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m>>h;
		for(int i=1;i<=m;i++){
			s=s+h;
		}
	}
	long long l=0,r=s.size()-1,ans=0;
	for(int i=0;i<ceil(s.size()/2);i++){
		if(s[l]!=s[r]){
			ans++;
		}
		l++;
		r--;
	}
	cout<<ans;
	return 0;
}
