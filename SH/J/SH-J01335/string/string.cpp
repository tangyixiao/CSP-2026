#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	string s;
	long long add=0;
	for(int i=0;i<n;i++){
		char c;
		int a;
		cin>>a>>c;
		s+=a*c;
		add+=a;
	}
	//cout<<s<<' '<<add<<endl;
	long long ans=0,l=0,r=add-1;
	while(l<=r){
		if(s[l]!=s[r]) ans++;
		l++,r--;
	}
	cout<<ans;
	return 0;
}
/*
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!
给我点分吧！！！ 
AFO!*/ 
