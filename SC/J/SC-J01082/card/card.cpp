#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int x=0,s=n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]==a[i-1]){
			x++;
			s--;
		}
		a[i-x]=a[i];
	}
	sort(a+1,a+1+s);
	for(int i=1;i<=m;i++){
		int ans=0;
		for(int j=1;j<=i;j++){
			ans++;
		}
		cout<<ans<<" ";
	}
	fclose(stdin);
	return 0;
}