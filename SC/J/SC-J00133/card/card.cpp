#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=5e5+5;
int n,m,len;
int a[N],z[N];
int cnt[N],wi[N]; 
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0); 
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++){
//		cout<<"\n";
		memset(wi,-1,sizeof(wi));
		memset(z,0,sizeof(z));
		len=0;
		for(int j=i;j<=n;j++){
			if(wi[a[j]]!=-1){
				for(int k=wi[a[j]]+1;k<=len;k++){
					wi[z[k]]=-1;
					z[k]=0;
				}
				len=wi[a[j]];
//				cout<<len<<" ";
			}
			else{
				z[++len]=a[j];
				wi[z[len]]=len;
//				cout<<len<<" ";
			} 
		}
		for(int j=1;j<=len;j++)
			cnt[z[j]]++;
	}
//	cout<<"\n";
	for(int i=1;i<=m;i++)
		cout<<cnt[i]<<" ";
	return 0;
}