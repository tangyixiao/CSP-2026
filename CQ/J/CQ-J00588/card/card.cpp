#include <bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int n,m;
int a[N];
int b[N];
int zn[N];//记录数字为i的位置在哪 
int w[N],kk[N];
int da[N];
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=zn[a[i]];
		zn[a[i]]=i;
	}
	int k=0;
	for(int st=1;st<=n;st++){
		for(int i=1;i<=n+1;i++) w[i]=0;
		k=0;
		for(int i=st;i<=n;i++){
			for(int j=st;j<=n;j++){
				k+=w[j];
				if(b[j]!=0 && k==0 && kk[b[j]]==0 && b[j]>=st){
					k++;
					w[b[j]]++;
					w[j]--;
				}
				kk[j]=k;
			}
		}
		k=0;
		for(int j=st;j<=n;j++){
			k+=w[j];
			if(k==0){
				da[a[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<da[i]<<" ";
	}
//	cout<<"\n";
    return 0;
}
