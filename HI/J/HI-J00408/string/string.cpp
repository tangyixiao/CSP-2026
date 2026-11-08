#include<bits/stdc++.h>
using namespace std;

long long c[10001],m[10001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long L,x=0,sum=0,v=0,n;
	cin>>L;
	char a;
	string s;
	for(long long  i=1;i<=L;i++){
		cin>>n>>a;
		for(long long j=0;j<n;j++){
			s[x]=a;
			x++;
		}
	}
	for(long long i=0;i<1000000;i++ ){
		long long p=x-1,q=0,k=-1;
		while(p>q){
			if(s[q]!=s[p]){
				sum++;
				k++;
			     break;
			}
			p--;
			q++;
		}
		if(k>-1){
		
		for(int j=q;j<p;j++){
			if(s[j]==s[q]){
				s[p]=s[j];
			}
		}
	}
	if(k==-1){
	
		cout<<sum;
		return 0;
}
	}
	return 0;
}

