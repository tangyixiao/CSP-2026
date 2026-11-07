#include<bits/stdc++.h>
using namespace std;
const int maxn=5e5+5;
int n,m,a[maxn],ans[maxn];
int mnpos[maxn],num[maxn];
vector<int> p[maxn];
bool A,B,ifcn[maxn];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	A=B=true;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]){
			A=false;
		}
	}
	if(n<=505){
		for(int i=1;i<=n;i++){
			memset(ifcn,true,sizeof(ifcn));
			for(int j=i;j<=n;j++){
				for(int k=i;k<j;k++){
					if(!ifcn[k]){
						continue;
					}
					if(a[k]==a[j]){
						for(int l=k;l<j;l++){
							ifcn[l]=false;
						}
						break;
					}
				}
			}
			for(int j=i;j<=n;j++){
				if(!ifcn[j]){
					continue;
				}
				ans[a[j]]++;
			}
		}
	}else if(A){
		for(int i=1;i<=n;i++){
			if(a[i]!=a[i+1]){
				ans[a[i]]=i;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	/*
	for(int i=1;i<=n;i++){
		cin>>a[i];
		p[a[i]].push_back(i);
		num[a[i]]++;
	}
	for(int i=n;i>=1;i--){
		if()
	}
	*/
	return 0;
}
//Trick||Treat!
