#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long a[n+1],c[m+1]={0};
	string s,ss;
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
	for(long long i=0;i<n;i++){
		for(long long j=i;j<n;j++){
			ss=(a[j]+48);
			if(s.find(ss)>s.length()){
				s+=ss;
			}else{
				string sss;
				for(long long i=0;i<s.find(ss);i++){
					sss+=s[i];
				}
				s=sss;
				s+=ss;
			}
		}
		for(long long i=0;i<s.length();i++){
			c[s[i]-48]++;
		}
		s="\0";
	}
	for(long long i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}