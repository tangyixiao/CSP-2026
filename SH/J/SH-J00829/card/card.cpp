#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
bool book[N];
int book1[N],sum[N],a[N],dis[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(book,0,sizeof book);
		memset(book1,0,sizeof book1);
		for(int j=i;j<=n;j++){
			if(book[a[j]]){
				for(int z=book1[a[j]];z<=j;z++){
					book[z]=0;
					book1[z]=0;
				}
			}
			book[a[j]]=1;
			book[a[j]]=j;
		}
		for(int j=1;j<=m;j++){
			if(book[j]){
				dis[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<dis[i]<<" ";
	}
	return 0;
}
