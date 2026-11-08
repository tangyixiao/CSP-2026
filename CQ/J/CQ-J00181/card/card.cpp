#include<bits/stdc++.h>
using namespace std;
int a[500005],b[500005];
bool l[500005]={0};
bool l1[500005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int q=0;
	int max1=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		max1=max(max1,a[i]);
		if(a[i]<a[i-1]) q=1;
    }
	if(n<=500 && m<=200){
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				if(l[a[j]]==0){
					l[a[j]]=1;
				}
				else{
					for(int p=1;p<j;p++){
						l[a[p]]=0;
						l1[p]=0;
					}
				}
				l1[j]=1;
			}
			for(int x=i;x<=n;x++) if(l1[x]!=0) b[a[x]]++;
			memset(l,0,sizeof(l));
			memset(l1,0,sizeof(l1));
		}
	}
	for(int i=1;i<=m;i++) cout<<b[i]<<" ";
	return 0;
}
