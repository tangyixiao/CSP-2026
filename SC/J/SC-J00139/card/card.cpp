#include<bits/stdc++.h>
using namespace std;
int a[500005],b[500005],c[300005];
int bj[300005];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int now=i;
		memset(b,0,sizeof(b));
		memset(bj,0,sizeof(bj));
		for(int j=i;j<=n;j++){
			if(bj[a[j]]!=0){
				for(int k=bj[a[j]]+1;k<now;k++){
					if(bj[a[k]]>bj[a[j]]){
//						cout<<"j"<<j<<"ak"<<a[k]<<"bj(ak)"<<bj[a[k]]<<'\n';
						bj[a[k]]=0;
					}
				}
				now=bj[a[j]]+1;
			}
			else {
				bj[a[j]]=now;
				b[now++]=a[j];
			}
		}
		for(int j=i;j<now;j++){
//			cout<<a[j]<<'\n';
//			cout<<b[j]<<' ';
			c[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<' ';
	}
	return 0;
}