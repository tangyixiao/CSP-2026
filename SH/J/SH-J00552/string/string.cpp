#include<bits/stdc++.h> 
using namespace std;
//const int N=2e5+9;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin>>n;
	string s;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		char c;
		cin>>c;
		for(int j=1;j<=a;j++)
			s+=c;
	}
//	cout<<s;
	int l=0,r=s.size()-1;
	int cnt=0;
	while(l<=r){
//		cout<<"hi"<<'\n';
		if(s[l]!=s[r]) cnt++;
		l++; r--;
//		if(l>=r) break;
	}
	cout<<cnt;
	return 0;
}
