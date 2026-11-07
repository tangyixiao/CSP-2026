#include <bits/stdc++.h>
using namespace std;
int a[50003];
int num[30003];
int used[30003];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(used[a[j]]==1){
				int p=j-1;
				while(a[p]!=a[j]){
					num[a[p]]--;
					used[a[p]]=0;
					p--;
				}
			}
			else{
				used[a[j]]=1;
				num[a[j]]++;
			}
		}
		for(int k=1;k<=m;k++){
			used[k]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<num[i]<<" ";
	}
	return 0;
}
