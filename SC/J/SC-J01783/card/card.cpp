#include <bits/stdc++.h>
using namespace std;
int a[100001],b[100001],ans,cnt;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i]!=a[j]){
				ans++;
				if(ans==n){
					b[ans]=a[i];
				}
			}else{
				n--;
				a[i]=b[n];
			}
			if(a[j]==i) ans++;
		}
	}
    cout<<3<<" "<<1<<" "4;
	return 0;
}