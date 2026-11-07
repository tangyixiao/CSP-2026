#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[500005],f[5005][3005]={0},ans[300005]={0};
void solv1(){
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(f[i][a[j]]!=0) for(int k=f[i][a[j]];k<=j;k++) f[i][a[k]]=0;
			f[i][a[j]]=j;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(f[i][j]!=0) ans[j]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return;
}
void solv2(){
	for(int i=1;i<=n;i++){
		while(a[i+1]==a[i]) i++;
		ans[a[i]]=i;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return;
}
void solv3(){
	int ans1=n,ans2=n;
	if(a[n]==1) for(int i=1;i<=n;i++) if(a[i]==1) ans2--;
	else if(a[n]==2) for(int i=1;i<=n;i++) if(a[i]==2) ans1--;
	cout<<ans1<<' '<<ans2;
	return;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n<=500) solv1();
	else if(n<=5000){
		bool flag=true;
		for(int i=1;i<n;i++) if(a[i]>a[i+1]) flag=false;
		if(flag==true) solv2();
		else solv1();
	}else if(m<=2) solv3();
	else{
		bool flag=true;
		for(int i=1;i<n;i++) if(a[i]>a[i+1]) flag=false;
		if(flag==true) solv2();
		else solv1();
	}
	return 0;
}