#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);	
	int a,b,n=0,sum=0,m=0;
	char s[1000000];
	char c;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b>>c;
		for(int j=n;j<n+b;j++){
			s[j]+=c;
		}
		n+=b;
	}
	m=n-1;
	for(int j=0;j<n;j++){
		if(j+1<=m){
			if(s[j]!=s[m]){
				sum++;
			}	
		}
		m--;
	}
	
		cout<<sum;	
	
	return 0;
} 