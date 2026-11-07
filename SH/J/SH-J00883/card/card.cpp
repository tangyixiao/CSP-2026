#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],l[300005],b[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		l[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		int now=i;
		while(now<=n){
			if(l[a[now]]==now) b[a[now++]]++;
			else{
				now=l[a[now]];
			}
		}
	}
	for(int i=1;i<=m;i++) cout<<b[i]<<' ';
	return 0;
}
