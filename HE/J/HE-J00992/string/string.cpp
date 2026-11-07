#include<bits/stdc++.h>
using namespace std;
string s;
long long n,a,l,r,cnt,f;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		char c;
		cin>>a;
		cin>>c;
		for(int j=0;j<a;j++){
			s+=c;
		}
	}
	r=s.size()-1;
	while(l<=r){
		if(s[l]!=s[r])cnt++;
		l++;
		r--;
	}
	cout<<cnt;
	return 0;
}
