#include<bits/stdc++.h>
using namespace std;
string s,t,b;
long long n,a[2000010],ans,r,l,f;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s+=b[i];
		}
	}
	for(int i=1;i<s.size();i++){
		if(s[i]==s[i-1]){
			f=1;
		}
	}
	if(f==1){
		cout<<0;
		return 0;
	}
	l=s.size()/2;
	r=floor(s.size()/2.0);
	while(l>=0&&r<=s.size()){
		if(s[l]!=s[r]){
			ans++;
		}
		l--;
		r++; 
	}
	cout<<ans;
	return 0;
}
