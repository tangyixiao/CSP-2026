#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,t=0;
	cin>>n;
	string s="",s2="";
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(long long j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	long long t2=s.size();
	for(long long i=1;i<=n;i++){
		for(long long j=t2-1;j>=0;j--){
			s2+=s[j];
		}
	}
	if(s2==s){
		cout<<0;
		return 0;
	}
	else{
		for(long long i=0;i<t2;i++){
			if(s2[i]!=s[t2-i-1]){
				t++;
			}
		}
		cout<<t;
	}
	return 0;
}