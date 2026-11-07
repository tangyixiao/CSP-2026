#include<bits/stdc++.h>
using namespace std;

const int maxn=2e5+5;
const long long maxn2=1e9+5;

int n,a[maxn];
char in[maxn],re[maxn2];
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>in[i];
	}
	long long l=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++) re[++l]=in[i];
	}
	
	long long cnt=0;
	for(long long i=1;i<=l;i++){
		if(l%2==1 && i==(l+1)/2) break;
		else if(i==l/2+1) break;
		if(re[i]!=re[l-i+1]) cnt++;
	}
	cout<<cnt;
	return 0;
}
