#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int h[N],R[N],L[N];
char op[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,ct=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>h[i]>>op[i];
		L[i]=ct+1;
		ct+=h[i];
		R[i]=ct;
	}
	int l=0,r=n+1,mid=1+ct>>1,f=1;
	int sum=ct,suml=0,sumr=0,ans=0;
	char opl,opr;
	if(ct%2==0)f=0;
	sum-=f;
	while(sum>0){
		if(suml==0){
			l++;
			suml=h[l];
			opl=op[l];
		}
		if(sumr==0){
			r--;
			sumr=h[r];
			opr=op[r];
		}
		if(R[l]>mid){
			sum=sum-(R[l]-mid)*2-f;
			suml=suml-(R[l]-mid)*2-f;
			R[l]=mid;
		}
		if(L[r]<mid){
			sum=sum-(mid-L[r])*2-f;
			sumr=sumr-(mid-L[r])*2-f;
			L[r]=mid;
		}
		if(opl!=opr)ans+=min(suml,sumr);
		sum-=min(suml,sumr)*2;
		if(suml>=sumr){
			suml-=sumr;
			sumr=0;
		}
		else{
			sumr-=suml;
			suml=0;
		}
	}
	cout<<ans;
	return 0;
}