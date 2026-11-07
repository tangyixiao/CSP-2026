#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	long long s[n+1];
	char d[n+1];
	for(long long i=1;i<=n;i++){
		cin>>s[i]>>d[i];
	}
	int f=1;
	for(long long i=1;i<n;i++){
		if(d[i]!=d[i]+1){
			f=0;
		}
	}
	if(f==1){
		cout<<0;
		return 0;
	}
	
	long long v=0,b=n; 
	for(long long i=1;i<=n;i++){
		if(d[i]!=d[b]){
			if(s[i]>=s[b]){
				d[b]=d[i];
				v+=s[i];
			}else{
				d[i]=d[b];
				v+=s[b]; 
			}
		}
		b--;
	}
		cout<<v;
	return 0;
} 
