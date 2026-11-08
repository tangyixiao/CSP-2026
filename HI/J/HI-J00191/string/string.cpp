#include<bits/stdc++.h>
using namespace std;
long long n,a[100000000];
char b[100000000];
char s[100000000];
string k[10000000],l[10000000];
int main(){
	cin>>n;
	long long m,x=0;
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdon);
	for(long long i=0;i<n;i++){
		cin>>a[i]>>b[i];
		for(long long j=0;j<a[i];j++){
			s[x]=b[i];
			x++;
		}
		m+=a[i];
	}long long y=0,p=0;
	for(long long i=0;i<m;i++){
		if(s[i]!=0)y++;
	}
	for(long long i=0;i<y;i++){
		l[i]=s[i];
	}
	for(long long i=y;i>=0;i--){
		k[i]=l[i];
	}
	for(long long i=0;i<y;i++){
		if(k[i]==l[i]){
			p++;
		}
	}
	if(p==y){
		cout<<0;
	}else{
		cout<<(y+1)/2;
	}
	return 0;
	
}

