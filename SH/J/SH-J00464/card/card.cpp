#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=m;i++){
		int sum=0;
		for(int j=i-1;j<=n;j++){
			for(int k=j+1;k<=n;k++){
				if(a[k]==i)sum++;
				break;
			}
		}
		cout<<sum<<' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
