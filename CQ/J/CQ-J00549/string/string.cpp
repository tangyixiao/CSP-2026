#include<bits/stdc++.h>
using namespace std;
long long n,a,ans=0,cnt=0,x[100000001];
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a>>c;
		for(long long j=1;j<=a;j++){
			x[++ans]=c-'a'+1;
		}
	}
	for(long long i=1;i<=ans/2;i++){
		if(x[i]!=x[ans-i+1]) cnt++;
	}
	cout<<cnt;
	return 0;
}
