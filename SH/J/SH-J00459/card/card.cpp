#include<bits/stdc++.h>
using namespace std;
int a[200010];
int f[300010];
int f1[300010];
int l[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0); 
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)	cin>>a[i]; 
	int cnt=0;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			f[a[j]]++;
			cnt++;
			l[cnt]=a[j];
			if(f[a[j]]>1){
				int k=cnt-1;
				while(l[k]!=l[cnt]){
					f[a[k]]--;
					l[k]=0;
					k--;
				}
				f[a[cnt]]=1;
				swap(l[cnt],l[k+1]);
				cnt=k+1;
			}
			/*
			for(int i1=1;i1<=m;i1++){
				if(f[a[i1]]>0)	cout<<a[i1]<<" ";
			} 
			cout<<"\n";
			*/
		}
		for(int j=i;j<=n;j++){
			if(f[a[j]]>0){
				f1[a[j]]+=f[a[j]];
				f[a[j]]=0;
			}	
		} 
		//cout<<"\n";
	}
	for(int i=1;i<=m;i++)	cout<<f1[i]<<" ";
	return 0;
}
