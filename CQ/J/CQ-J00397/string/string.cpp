#include<bits/stdc++.h>
using namespace std;
long long n,k=0;
long long s;
char a[200005],b[200005],q;
bool g=false;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long u=1;
	for(int i=1;i<=n;i++){
		long long m;
		char x;
		cin>>m>>x;
		if(i!=1&&q!=x) g=true; 
		q=x;
		for(int j=s+1;j<=m+s;j++){
			a[j]=x;
		}
		s+=m;
	}
	if(g==false){
		cout<<"0";
		return 0;
	}
	for(long long i=1;i<=s;i++){
		b[i]=a[s-i+1];
	}
	for(long long i=1;i<=s/2;i++){
		if(b[i]!=a[i]) k++;
	}
	cout<<k;
	return 0;
} 
