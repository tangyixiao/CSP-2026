#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
struct A{
	int num;
	int s[105];
}a[200005];
int i;
void check(){
	int x=a[i].num;
	int q[105];
	int k=0;
	while(x){
		k++;
		q[k]=x%2;
		x/=2;
	}
	for(int j=k,t=33-k;j>=1;j--,t++){
		a[i].s[t]=q[j];
	}
}
int aa[35];
int main(){
freopen("and.in","r",stdin);
freopen("and.out","w",stdout);
cin>>n>>m;
for(i=1;i<=n;i++){
	cin>>a[i].num;
	check();
}
for(i=1;i<=32;i++){
	int cmp=0;
	for(int j=1;j<=n;j++){
		if(a[j].s[i]==1){
			cmp++;
		}
	}
	if(cmp>0&&cmp>=m){
		for(int j=1;j<=n;j++){
			if(a[j].s[i]!=1){
				for(int p=1;p<=32;p++){
					a[j].s[p]=0;
				}
			} 
		}
	}
	if(cmp>=m) aa[i]=1;
	else aa[i]=0;
}
	for(i=1;i<=32;i++){
		ans+=pow(2,32-i)*aa[i];
	}
	cout<<ans;
	return 0;
}
