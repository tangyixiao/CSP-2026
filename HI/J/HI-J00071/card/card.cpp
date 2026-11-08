#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],c1,c2,c3;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(a[j]==1){
				c1++;
			}
			else if(a[j]==2){
				c2++;
			}
			else if(a[j]==3){
				c3++;
			}
		}
	}
	cout<<c1<<' '<<c2<<' '<<c3;
	return 0;
}
