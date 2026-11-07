#include<bits/stdc++.h>
#define int long long
using namespace std;
int ans,sum;
int gaihw(string s){
	int x=sum/2;
	for(int i=0;i<x;i++){
		if(s[i]!=s[sum-i-1]){
			ans++;
		}
	}
	return ans;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	string s;
	int n;cin>>n;
	while(n--){
		int a;char b;
		cin>>a>>b;
		sum+=a;
		while(a--){
			s+=b;
		}
	}
	cout<<gaihw(s);
	return 0;
}
