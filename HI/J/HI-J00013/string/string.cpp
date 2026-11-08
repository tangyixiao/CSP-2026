#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	char c;
	long long n,a,ans=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>c;
		for(int i=0;i<a;i++){
			s+=c;
		}
	}
	int l=0,r=s.size()-1;
	while(l<r){
		if(s[l]!=s[r]){
			ans++;
		}
		l++;r--;
	}
	cout<<ans;
	return 0;
}
