#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,a[N],fa[N];
char c[N],fc[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		fa[i]=a[i],fc[i]=c[i];
	}
	int i=1,j=n;
	long long ans=0;
	while(i<=n){
		long long cnt=min(a[i],fa[j]);
		if(c[i]!=fc[j]){
			ans+=cnt;
		}
		a[i]-=cnt;
		fa[j]-=cnt;
		if(!a[i]){
			i++;
		}
		if(!fa[j]){
			j--;
		}
	}
	cout<<ans/2;
	return 0;
}
