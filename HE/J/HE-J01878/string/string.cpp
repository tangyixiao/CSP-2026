#include<bits/stdc++.h>
using namespace std;
long long a[2000000000000001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,m,h=0,t=0;
	char b;
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>m>>b;
		t=t+m;
		for(long long j=h;j<t;j++){
			a[j]=b;
		}
		h=h+m;
	}
	long long g=h/2;
	for(long long j=0;j<t;j++){
		if(a[j]==a[t+1-j]&&j!=t+1-j){
			g--;
		}
	}
	cout<<g;
	return 0;
}
