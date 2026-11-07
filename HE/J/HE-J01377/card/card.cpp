#include<bits/stdc++.h>
using namespace std;
struct P{
	int d,f,l;
}a[500010];
int cnt[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].d;
		a[a[i].d].l=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(a[a[j].d].l!=j){
				j=a[a[j].d].l;
				cnt[a[j].d]++;
			}
			else{
				cnt[a[j].d]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*
4 3
1 2 1 3
*/
