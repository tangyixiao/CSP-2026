#include <bits/stdc++.h>
using namespace std;
int n,m,a[500010],b[500010],c[500010],d[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int cnt=0;
		for(int j=i;j<=n;j++){
			cnt++;
			if(b[a[j]]!=0){
				for(;cnt>=b[a[j]]+1;cnt--){
					b[c[cnt]]=0;
					c[cnt]=0;
				}
			}else{
				b[a[j]]=cnt;
				c[cnt]=a[j];
			}
//			for(int j=1;j<=n;j++){
//				cout<<c[j]<<' ';
//			}
//			cout<<endl;
		}
		for(int j=1;j<=cnt;j++){
//			cout<<c[j]<<' ';
			d[c[j]]++;
			b[c[j]]=0;
			c[j]=0;
		}
//		cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<d[i]<<' ';
	}
	return 0;
}
