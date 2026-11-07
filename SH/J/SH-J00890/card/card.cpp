#include<bits/stdc++.h>
using namespace std;
void init(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
}
const int N=5e5+9;
int n,m,a[N],ans[N],w[N],f[N];
int main(){
	init();
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int k=1;k<=n;k++){
		fill(w,w+m+1,-1);
		fill(f,f+m+1,0);
		int l=1;
		for(int i=k;i<=n;i++){
			if(w[a[i]]==-1){
				w[a[i]]=l;
				f[l]=a[i];
				l++;
			}else{
				int x=l;
				l=w[a[i]]+1;
				for(int j=l;j<=x;j++){
					w[f[j]]=-1;
					f[j]=0;
				}
			}
		}
		for(int i=1;i<=m;i++){
			if(w[i]!=-1){
				ans[i]++;
			}
		}
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" ";
	return 0;
}

