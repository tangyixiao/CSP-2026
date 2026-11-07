#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,x,sum=0;
	char y;
	string s;
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>x>>y;
		for(long long i=1;i<=x;i++){
			s+=y;
		}
	}
	string a,b,c;
	long long len=(s.size())/2;
	for(long long i=0;i<len;i++){//原本前 
		a+=s[i];
	}	
	for(long long i=len+1;i<=s.size();i++){//原本后 
		b+=s[i];
	}
	for(long long i=len-1;i>=0;i--){//原本前回文后 
		c+=s[i];
	}
	for(long long i=0;i<len;i++){
		if(b[i]!=c[i])
			sum++;
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
} 