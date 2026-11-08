#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
int n,m,a[N],b[M],c[N],d[M],l;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		l=0;
		memset(c,0,sizeof(c));
		memset(d,0,sizeof(d));
		for(int j=i;j<=n;j++){
			if(d[a[j]]!=0){
				while(1){
					if(c[l]!=a[j]){
						d[c[l]]--;
						l--;
					}else{
						break;
					}
				}
			}else{
				l++;
				c[l]=a[j];
				d[a[j]]++;
			}
		} 
		for(int j=1;j<=m;j++){
			if(d[i]!=0){
				b[i]++;
			}
		}
	} 
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
