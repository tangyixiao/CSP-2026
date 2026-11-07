#include<bits/stdc++.h>
using namespace std;
int n,a;
char c;
string s;
int l=0,r=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		r+=a;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	r--;
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