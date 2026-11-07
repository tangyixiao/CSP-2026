#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e9+7;
long long n,sum=0,d=0,ans=0;
char a[MAXN];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		long long b;
		char c;
		cin>>b;
		sum+=b;
		cin>>c;
		for(long long j=1+d;j<=b+d;j++){
			a[j]=c;
		}
		d+=b;
	}
	int q=1,w=sum;
	for(long long i=1;i<=(sum+1)/2;i++){
		if(a[q]!=a[w]){
			ans++;
		}
		q++;
		w--;
	}
	cout<<ans;
	return 0;
}

