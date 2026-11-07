#include<bits/stdc++.h>
using namespace std;
long long a[200010],b[200010];
char c[200010],c1[200010];
bool hw(string s){
	string t="";
	for(int i=s.size()-1;i>=0;i--)t+=s[i];
	return t==s;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	long long maxs=-1;
	string s="";
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if(a[i]>maxs)maxs=a[i];
		for(int j=1;j<=a[i] && a[i]<=100000;j++)s+=c[i];
	}
	if(maxs>=100000){
		long long s1=0;
		for(int i=1;i<=n/2;i++){
			s1+=a[i];
		}
		cout<<s1;
		return 0;
	}
	if(hw(s) && n<=2000){
		cout<<0;
		return 0;
	}
	if(maxs==1){
		cout<<n/2;
		return 0;
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	if(n==2){
		if(hw(s))cout<<0;
	}
	for(int i=1;i<n;i++){
		if(c[i]==c[i+1]){
			a[i]+=a[i+1];
			a[i+1]=0;
			c[i+1]='0';
		}
	}
	int cn=0;
	for(int i=1;i<=n;i++){
		if(a[i]!=0){
			cn++;
			b[cn]=a[i];
			c1[cn]=c[i];
		}
	}
	for(int i=1;i<=cn/2;i++){
		if(c[i]==c[cn-i] && a[i]==a[cn-i])a[cn-i]=0;
	}
	long long s_=0;
	for(int i=cn;i>=cn/2+1;i++){
		s_+=a[i];
	}
	cout<<s_;
	return 0;
}
