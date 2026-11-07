#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(0);
	int cnt=0;
	int n;
	cin>>n;
	string s=" ";
	for(int i=0;i<n;i++){
		int u;
		char h;
		cin>>u>>h;
		for(int i=0;i<u;i++){
			s+=h;
		}
	}
	int q=s.size()-1;
	int l=q/2+1;
	for(int i=1;i<=l;i++){
		if(s[i]!=s[q+1-i]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
} 
