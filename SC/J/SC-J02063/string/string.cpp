#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,cnt=0;
	string s;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;char c;
		cin>>a>>c;
		for(int j=0;j<a;j++){
			s+=c;
		}
	}
	int l=0,r=s.size()-1;
	while(l<r){
		if(s[l]!=s[r]){
			cnt++;
		}
		l++;r--;
	}
	cout<<cnt;
	return 0;
}