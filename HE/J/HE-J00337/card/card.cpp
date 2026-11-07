#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],ans[300010],v[500010],l[500010];
void f(int s,int n){
	int step=0;
	for(int i=s;i<=n;i++){
		if(v[a[i]]){
			for(int j=v[a[i]];j<i;j++) ans[l[j]]--,v[l[j]]=0,l[j]=0;
			
		}
		v[a[i]]=i;
		l[++step]=a[i];
		ans[a[i]]++;
	}
	for(int i=1;i<=n;i++) v[i]=0;
}
int main(){
    freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==1){
		cout<<n;
		return 0;
	}
	for(int i=1;i<=n;i++){
		f(i,n);
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
