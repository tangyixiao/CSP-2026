#include<bits/stdc++.h>
using namespace std;
int l1[200005],l2[200005],a[200005];
int change(int x,int y){
	memset(l1,0,sizeof(l1));
	memset(l2,0,sizeof(l2));
	memset(a,0,sizeof(a));
	int lenx=0;
	while(x!=0){
		l1[lenx]=x%2;x/=2;lenx++;
	}
	int leny=0;
	while(y!=0){
		l2[leny]=y%2;y/=2;leny++;
	}
	for(int i=0;i<max(lenx,leny);i++){
		if(l1[i]==1&&l2[i]==1){
			a[i]=1;
		}
	}
	int ans=0;
	for(int j=0;j<max(lenx,leny);j++){
		ans+=a[j]*pow(2,j);
	}
	return ans;
} 
int r[200005];
int ma;int n,m;
void f(int num,int p,int an){
	if(num==m){
		if(an>ma){
			ma=an;	return;
		}
	}
	if(p>=n) return;
	int b=r[p];
	f(num,p+1,an);
	if(an==0) f(num+1,p+1,b);
	else{
		f(num+1,p+1,change(an,b));
	} 
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>r[i];
	if(m==1){
		sort(r,r+n);
		cout<<r[n-1];
		return 0;
	}
	ma=-1;
	f(0,0,0);
	cout<<ma;
	return 0; 
}
/*
3 11
15 1111
12 0011
*/
