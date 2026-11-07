#include<bits/stdc++.h>
using namespace std;
const int N=200005;
long long n,m,a[N],b[N][32],max1=0,re[N],ans;
void ze(long long a,long long i){
	int k=1;
	while(a){
		b[i][k++]=a%2;
		a/=2;
	}
	if(k>max1) max1=k;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		re[i]=i;
		ze(a[i],i);
	}
	long long tmp=n;
	for(int i=32;i>=1;i--){
		int t[N],k=0;
		for(int j=1;j<=tmp;j++){
			if(b[re[j]][i]) t[++k]=re[j]; 
		}
		if(k>=m){
			for(int x=1;x<=k;x++) re[x]=t[x];  
			tmp=k;
		} 
	}
	ans=a[re[1]];
	for(int i=2;i<=tmp;i++) ans=ans&a[re[i]];
	cout<<ans; 
	return 0;
}
