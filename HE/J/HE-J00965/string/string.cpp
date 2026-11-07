#include<bits/stdc++.h>
using namespace std;
long long n,m=0,cnt=0;
long long a[200100];
char a1[200100],b[100100000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>a1[i];
		m+=a[i];
	}
	int g=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			b[g]=a1[i];
			g++;
		}
	}
	int r=m;
	for(int i=1;i<=(m+1)/2;i++){
		if(b[i]!=b[r]) cnt++;
		r--;
	}
	cout<<cnt;
	return 0;
} 

