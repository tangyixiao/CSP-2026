#include<bits/stdc++.h>
using namespace std;
int c[39]={1},l=30,n,m,a[200009],a1[200009],j,num,x;
bool b[200009][39],cnt[200009],e[200009];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	for(int i=1;i<=l;i++){
		c[i]=c[i-1]*2;
	}
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a1[i];
		a[i]=a1[i];
		for(int j=30;j>=0;j--)
			if(a1[i]>=c[j]){
				b[i][j]=1;
				a1[i]-=c[j];
				}
	}
	while(n-num>=m&&j<=n){
		j++;
		if(cnt[j])continue;
		for(int i=1;i<=n;i++){
			if(!b[i][j])e[i]=1,x++;
		}
		if(n-x>m){
			num+=x;
			x=0;
			for(int i=1;i<=n;i++)cnt[i]=e[i],e[i]=0;
		}
	}
	j=0,x=0;
	
	for(int i=1;i<=n;i++){
		if(!cnt[i]){
			x=(x&a[j]);
			j++;
		}
	}
	cout<<x<<endl;
	return 0;
}
