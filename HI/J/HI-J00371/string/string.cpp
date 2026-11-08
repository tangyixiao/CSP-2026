#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin>>n;
	int a;
	string c;
	string s="";
	for(int i=1;i<=n;i++){
		cin>>a;
		cin>>c;
		for(int j=0;j<a;j++){
			s+=c;
		}
	}
	long long r=s.size()-1,l=0;
	cout<<endl;
	long long cnt=0;
	while(l<r){
		if(s[l]!=s[r]){
			cnt++;
		}
		l++;
		r--;
	}
	cout<<cnt;
	return 0;
}
