#include<bits/stdc++.h>
using namespace std;
int a[500005];
int b[500005];
int c[500005];
int d[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int idx=0;
		memset(c,0,sizeof(c));
		memset(b,0,sizeof(b));
		for(int j=i;j<=n;j++){
			if(b[a[j]]==0){
				c[++idx]=a[j];
				b[a[j]]=idx;
			}else{
				int p=idx;
				idx=b[a[j]];
				for(int k=idx+1;k<=p;k++){
					c[k]=0;
				}
				c[idx]=a[j];
				b[a[j]]=idx;
			}
		}
		for(int j=1;j<=idx;j++){
			//cout<<c[j]<<" ";
			d[c[j]]++;
		}
		//cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<d[i]<<" ";
	}
	return 0;
}
