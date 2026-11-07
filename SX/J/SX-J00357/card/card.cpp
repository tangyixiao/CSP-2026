#include <bits/stdc++.h>
using namespace std;
int n,m,ans;
int a[100005];
int b[100005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int x=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>x;
		a[i]=x;
		b[x]++;
	}
	for(int i=1;i<=n;i++){
		ans=b[a[i]];
		if(i=n)  ans=n;
		cout<<ans;
	}





	return 0;
}