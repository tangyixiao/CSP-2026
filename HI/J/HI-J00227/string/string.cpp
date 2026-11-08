#include<bits/stdc++.h>
using namespace std;
string s="";
long long a;
int main(){
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
cin>>a;
		for(long long i=1;i<=a;i++){
		long long b;
		char e;
		cin>>b>>e;
			for(long long j=0;j<b;j++) s+=e;
}
	long long p=0,d=s.size()-1,k=0;
		while(p<d){
			if(s[p]!=s[d]) k++;
			p++;
			d--;
			
	}
	cout<<k;
	return 0;
}
