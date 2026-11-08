#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s="";
	bool BS=true;
	for(int i=0;i<n;i++){
		int y;
		char t;
		cin>>y>>t;
		for(int j=1;j<=y;j++){
			s=s+t;
		}
	}
	int ctrl=0,u=s.size()/2;
	for(int i=0;i<=u;i++){
		if(s[i]!=s[s.size()-i-1]) ctrl++;
	}
	cout<<ctrl;
	return 0;
}
