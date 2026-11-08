#include<bits/stdc++.h>
using namespace std;
int arr[2000005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,cmax=0,cand=0;
	cin>>arr[1];
	cand=arr[1];
	for(int i=2;i<=n;++i) cin>>arr[i],cand&=arr[i],cmax=max(cmax,arr[i]);
	if(m==1) cout<<cmax;
	else if(m==2){
		int andmax=0;
		for(int i=1;i<=n;++i){
			for(int j=1;j<=n;++j){
				andmax=max(i&j,andmax);
			}
		}
		cout<<andmax;
	}
	else if(m==n) cout<<cand;
	else cout<<114514;
	return 0;
}
//初三11班唐琪涵重庆一双校花 
