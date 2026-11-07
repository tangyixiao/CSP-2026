#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define int128 __int128
#define gc getchar()
using namespace std;
const int N=5e5+10,M=3e5+10;
int rd(){
	int x=0,f=1;char c=gc;
	for(;!isdigit(c);c=gc)if(c=='-')f=-1;
	for(;isdigit(c);x=x*10+c-'0',c=gc);
	return x*f;
}
int n,m;
int a[N];
ll ans[M];int pos[M];
int ta[N],tmp;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=rd(),m=rd();
	for(int i=1;i<=n;i++)a[i]=rd();
	for(int t=1;t<=n;t++){
		for(int i=1;i<=m;i++)pos[i]=0;tmp=0;
		for(int i=t;i<=n;i++){
			if(pos[a[i]]==0){
				ta[++tmp]=a[i];
				pos[a[i]]=tmp;
			}else{
				for(int k=1;k<=m;k++){
					if(pos[a[i]]<pos[k]&&pos[k]<=tmp)pos[k]=0;
				}
				ta[pos[a[i]]]=a[i];tmp=pos[a[i]];pos[a[i]]=tmp;
			}
		}
		for(int i=1;i<=tmp;i++){
			ans[ta[i]]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	cout<<"\n";
	return 0;
}
