#include<bits/stdc++.h>
using namespace std;
int a[500100],n,m,len=1,x,b[500010],q[500100],ans[500100];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	for(int t=1;t<=n;t++){
		len=1;
	for(int i=t;i<=n;i++){
		x=b[i];
		if(q[x]!=0){
		for(int j=q[x]+1;j<=len;j++){
			q[a[j]]=0;
			a[j]=0;
			}
			len=q[x];
		}
		q[x]=len;
		a[len]=x;
		len++;
	}
	for(int j=1;j<len;j++){
		ans[a[j]]++;
		//cout<<a[j]<<' ';
	}
	//cout<<endl;
	for(int i=1;i<=n;i++){
		a[i]=0;
		q[b[i]]=0;
	}
}
for(int i=1;i<=m;i++){
	cout<<ans[i]<<' ';
}
	return 0;
} 
/*10 3
3 1 2 1 3 2 3 1 2 1
*/