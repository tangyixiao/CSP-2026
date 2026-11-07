#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[200005],n,m,mx=0,mxnum=0;
void df(int k,int s,int x){
	if(k>m){
		return;
	}
	int p=0;
	for(int i=k+x;i<=k+n-m;i++){
		int ns=s&a[i];
		if(k==m) mx=max(mx,ns);
		df(k+1,ns,p);
		p++;
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mxnum=max(mxnum,a[i]);
	}
	if(m==1||n==1){
		cout<<mxnum;//RP++
		return 0;
	}
	if(n==2){
		cout<<(a[1]&a[2]);//RP++
	}
	//OK!!!
	if(n<=16384){
		df(1,INT_MAX,0);
	}
	else{
		if(a[1]==0){//RP+=B
			for(int i=1;i<=n;i++){
				if(i<=n-m+1){
					mx+=pow(2,n-i);
				}
			}
		}else{//RP+=A
			sort(a+1,a+n+1);
			mx=a[n];
			for(int i=1;i<=m;i++){
				mx=a[n-i+1]&mx;
			}
		}
	}
	cout<<mx;
	return 0;
}