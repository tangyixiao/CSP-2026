#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;i++){
		int e;
		string f;
		cin>>e>>f;
		for(int j=0;j<e;j++)s=s+f;
	}
	int l=0,r=s.size()-1;
	int cnt=0;
	while(l<=r){
		if(s[l]!=s[r])cnt++;
		l++;
		r--;
	}
	cout<<cnt;
	return 0;
}