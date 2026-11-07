#include<bits/stdc++.h>
using namespace std;
long long a[200007];
string b[200007];
int main(){
	freopen("string.in","w",stdin);
	freopen("string.out","r",stdout);
	int n;
	long long ans;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>b[i];
	}
	int x=1;
	int y=n;
	ans=0;
	while(y>x){
		if(a[x]>a[y]){
			a[x]=a[x]-a[y];
			if(b[x][0]!=b[y][0]){
				ans=ans+a[y];
			}
			y--;
		}
		else{
			a[y]=a[y]-a[x];
			if(b[x][0]!=b[y][0]){
				ans=ans+a[x];
			}
			x++;
			if(a[y]==0) y--;
		}
	}
	cout<<ans;
	return 0;
}
