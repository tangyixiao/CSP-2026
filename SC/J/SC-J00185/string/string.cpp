#include<bits/stdc++.h>
using namespace std;
int n;
long long be,en;
string a,b;
int main(){
	freopen(string.in,"r",stdin);
	freopen(string.out,"w",stdout);
	int n;
	cin>>n;
	long long m=0;
	char t;
	for(int i=1;i<=n;i++){
		be=m+be;
		cin>>m>>t;
		en=m+en;
		for(int j=be;j<en;j++){
			a[j]=t;
		}
	}
	for(int i=0;i<en;i++){
		b[i]=a[en-i-1];
	}
	long long sum=0;
	for(int i=0;i<en/2;i++){
		if(b[i]!=a[i]) sum++;
	}
	cout<<sum;
	return 0;
}
