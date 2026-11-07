#include<bits/stdc++.h>
using namespace std;
const long long INF=1e9;
const int N=1e6+10;
long long a[N];
char s[INF];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;cin>>n;
	long long v=0;
	for(long long i=0;i<n;i++){
		cin>>a[i]>>c[i];
		for(long long j=0;j<a[i];j++){
			s[v]=c[i];
			v++;
		}
	}
	long long cnt=0;
	for(long long i=0;i<v;i++){
		if(s[i]!=s[v-i-1]){
			s[v-i-1]=s[i];
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
} 
