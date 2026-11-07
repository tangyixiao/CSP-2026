#include<bits/stdc++.h>
using namespace std;
vector<long long> a;
vector<char> b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(nullptr);
	cout.tie(nullptr);
	long long n,sum=0,ans=0,h=0,hi=0;
	a.reserve(n);
	b.reserve(n);
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>a[i]>>b[i];
		sum+=a[i];
	}
	while(hi<=sum/2){
		hi+=a[h];
		h++;
	}
	h--;
	long long hl=a[h];
	if(hi-a[h]==0){
		
	}
	else{
		if(sum%2==1){
			sum--;
			hl--;
			a[h]--;
			hi--;
		}
		if(hi-sum/2>sum/2-hi+hl)a[h]=2*hi-sum-hl;
		if(hi-sum/2<sum/2-hi+hl)a[h]=sum+hl-2*hi;
		sum-=hl-a[h];
		hi=sum/2;
	}
	long long ac=0,bc=0,ap=0,bp=n-1;
	for(long long i=0;i<hi;i++){
		if(ac==a[ap]){
			ap++;
			ac=0;
		}
		if(bc==a[bp]){
			bp++;
			bc=0;
		}
		ac++,bc++;
		if(b[ap]!=b[bp])ans++;
	}
	cout<<ans;
	return 0;
}
