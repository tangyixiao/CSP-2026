#include<bits/stdc++.h>
using namespace std;
int a[200005];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,maxn=0,minn=0x3f3f3f3f;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(m==1){
		for(int i=1;i<=n;i++)maxn=max(maxn,a[i]);
		cout<<maxn;
		return 0;
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				maxn=max(maxn,a[i]&a[j]);
			}
		}
		cout<<maxn;
		return 0;
	}
	else if(m==n){
		maxn=a[1];
		for(int i=2;i<=n;i++)maxn=maxn&a[i];
		cout<<maxn;
		return 0;
	}
	else if(m==n-1){
		for(int i=1;i<=n;i++){
			int cnt=a[1];
			for(int j=2;j<=n;j++){
				if(j!=i){
					cnt=cnt&a[j];
				}
			}
			maxn=max(maxn,cnt);
		}
		int cnt=a[2];
		for(int j=3;j<=n;j++)cnt=cnt&a[j];
		maxn=max(maxn,cnt);
		cout<<maxn;
		return 0;
	}
	else{
		bool flag1=true;
		for(int i=1;i<=n;i++){
			if(a[i]%2==0)flag1=false;
		}
		if(flag1==true){
			sort(a,a+n+1,cmp);
			if(m<n-1&&m>2)cout<<a[m-1];
			return 0;
		}
		cout<<0;
	}
	fclose(stdin);
	fclose(stdout);
} 
