#include<bits/stdc++.h>
using namespace std;
int a[500005];
int b[500005];
int cnt[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>b[i];
	}
	for (int i=1;i<=n;i++){
		int pos=0;
		for(int j=i;j<=n;j++){
			int k=-1;
			for (int o=1;o<=pos;o++){
				if(a[o]==b[j]){
					k=o;
					break;
				}
			}
			if(k==-1){
				a[pos+1]=b[j];
				pos++;
			}
			else{
				a[k]=b[j];
				pos=k;
			}
		}
		for (int i=1;i<=pos;i++){
			cnt[a[i]]++;
		}
	}
	for (int i=1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
}
