#include<bits/stdc++.h>
using namespace std;
bool l=1;
int n,m;
int a[200009],num[200009];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=2;i<=n;i++){
		if(a[i]<a[i-1])
		l=0;
	}
	if(l==1){
		int ans=0; 
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				if(a[j]<=i)
				ans++;
			}
			cout<<ans<<" ";
			ans=0;
		}
	}
	return 0;
}
