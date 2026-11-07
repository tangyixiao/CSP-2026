#include<bits/stdc++.h>
using namespace std;
int n,m,a[300010],b[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>m>>n;
	
	for(int i=1;i<=m;i++){
		cin>>a[i];
	}
	while(n--){
		for(int i=1;i<=m;i++){
			b[i]=a[i];
			for(int j=1;j<i;j++){
				if(b[i]==b[j]){
					for(int x=1;x<=j;x++)b[x]=0;
				}
			}
		}
		cout<<1<<" ";
	}
	return 0;
}
