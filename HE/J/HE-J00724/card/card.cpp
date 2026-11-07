#include<bits/stdc++.h>
using namespace std;
const int MAXN=5e5+5;
struct lis{
	int sum;
	int s;
	int e;
} lst[MAXN];
map<int,int> b;
int a[MAXN];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int i=0;
	while(++i<=n){
		for(int j=i;j<=n;j++){
//			if(lst[a[j]].sum!=0){
////				int y=lst[lst[a[j]].e].sum;
////				do{
////					lst[y].sum=0;
////					y=a[lst[y].e];
////				}while(lst[y].sum!=0);
//				lst[a[j]].e=0;
//				continue;
//			}
			lst[a[j]].s=j-1;
			lst[a[j]].sum=a[j];
			lst[a[j-1]].e=j;
		}
//		lst[a[n]].e=0;
		int j=a[i];
		do{
			b[lst[j].sum]++;
//			cout<<lst[j].sum<<' ';
			j=a[lst[j].e];
		}while(lst[j].sum!=0);
//		cout<<'\n';
	}
	for(int j=1;j<=m;j++){
		cout<<(b[j])<<' ';
	}
	return 0;
}
