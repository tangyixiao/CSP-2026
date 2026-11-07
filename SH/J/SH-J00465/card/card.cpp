#include<bits/stdc++.h>
using namespace std;
int a[500010],book[300010],book3[300010],book1[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int cnt=1;
		int b[500010];
		for(int j=i;j<=n;j++){
			if(book[a[j]]){
				for(int k=j-1;k>=1;k--){
					if(b[k]==a[j]){
						cnt=k+1;
						break;
					}
					book[a[j]]=0;
				}
			}else{
				b[cnt]=a[j];
				cnt++;
			}
			book[a[j]]++;
		}
		for(int j=1;j<=m;j++) book[j]=0;
		for(int j=1;j<cnt;j++){
			book[b[j]]++;
		}
		for(int j=1;j<=m;j++){
			if(book[j]){
				book[j]=0;
				book1[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<book1[i]<<' ';
	}
	return 0;
}
