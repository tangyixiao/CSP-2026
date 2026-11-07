#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
long long sum;
long long n,a[N],b[N];
long long vis[N]={0};
char s[N],c[N];
bool f;
long long hv(int n){
	f=true;
	int q=1;
	for(int i=0;i*2<=n;i++){
		if(c[i]!=c[n-q]){
			b[i]=c[n-q];
			vis[n-i]=1;
			f=false;
			sum++;
		}
		q++;
	}
	return sum;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
	}
	int k=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			c[k]=s[i];
			k++;
		}
	}
	if(f){
		cout<<0;
		return 0;
	}
	cout<<hv(k);
	return 0;
} 
