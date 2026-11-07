#include <bits/stdc++.h>
using namespace std;

long long n,m,c,sum,sum2,a[210000],b[3010];


int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<n;
		return 0;
	} else if(m==2){
		int a1=0,b1=0;
		for(int i=1;i<=n;i++){
			b[1]=a[i];
			for(int j=i;j<=n;j++){
				if(a[j]==b[1]){
					b[2]=0;
				}else b[2]=a[j];
			}
			if(b[2]==0&&b[1]==1) a1++;
			else if(b[2]==0&&b[1]==2) b1++;
			else{
				a1++;
				b1++;
			}
		}
		cout<<a1<<' '<<b1;
		return 0;
	}else{
		for(int i=1;i<=n;i++){
			for(int j=a[i];j<=m;j++){
				b[j]+=1;
			}
		}
		for(int i=1;i<=m;i++){
			cout<<b[i]<<' ';
		}
	}
	return 0;
}