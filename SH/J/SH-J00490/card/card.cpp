#include<bits/stdc++.h>
using namespace std;
const int N=5e5;
int a[N],cnt[N],n,m,x;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		x=1;
		while(x<=n){
			int y=x;
			for(int j=n;j>=x+1;j--){
				if(a[j]==a[i]){
					x=j;
					break;
				}
			}
			if(x==n){
				cnt[a[x]]++; 
				break;
			}
			cnt[a[x]]++;
			x++;
		}
	}
	for(int i=1;i<=m;i++){
			cout<<cnt[i]<<" ";
		}
		cout<<endl;
	return 0;
}
