#include<bits/stdc++.h>
using namespace std;
string a,b,d;
long long n,s,ch;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
	
		cin>>s>>b;
		for(long long i=1;i<=s;i++){
			a+=b;
			ch++;
		}
	}
	
	for(long long i=ch-1;i>=0;i--){
		for(long long j=0;j<ch;j++){
			b[i]=a[j];
		}
	}
	
	if(a==b){
		cout<<0;
	}
	else{
		cout<<ch/2;
	}
	return 0;
}
