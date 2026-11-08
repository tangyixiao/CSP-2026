#include<bits/stdc++.h>
using namespace std;
int a[200005][32],an[32],an0[32];
long long k,mk;
void t(int x,int i){
	k=0;
	while(x){
		a[i][k]=x%2;
		an[k]+=x%2;
		k++;
		x/=2;
	}
	mk=max(mk,k);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,ans=0,b;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>b;
		t(b,i);
	}
	k=0;
	for(int i=mk-1;i>=0;i--){
		if(an[i]>=m){
			an0[i]=1;
			if(i>k){
				k=i;
			}
			for(int j=0;j<n;j++){
				if(a[j][i]==0){
					for(int l=0;l<i;l++){
						if(a[j][l]==1){
							a[j][l]=0;
							an[l]-=1;
						}
					}
				}
			}
		}
	}
	for(int i=0;i<=k;i++){
		if(an0[i]==1){
			ans+=pow(2,i);
		}
	}
	cout<<ans;
	return 0;
}
