#include<bits/stdc++.h>
using namespace std;
long long f=0,n=0,h=0,j=0;
char a[20000000000001];
long long b[200010];
char y;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	f=0;
	for(long long i=1;i<=n;i++){
		cin>>b[i]>>y;
		for(long long j=f+1;j<=f+b[i];j++){
			a[j]=y;
		}
		f=f+b[i];
	}
	j=f;
	for(long long i=1;i<j;i++){
		if(a[i]!=a[j]){
			h++;
		}
		j--;
	}
	cout<<h;
	return 0;
}