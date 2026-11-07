#include<bits/stdc++.h>
using namespace std;
int n,a[200006],m,l,r;
bool ck(int x){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if((a[i]&x)==x)cnt++;
	}
	return cnt>=m;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
		r=max(r,a[i]);
	}
	if(m==1){
		cout<<r;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				l=max(l,a[i]&a[j]);
			}
		}
		cout<<l;
		return 0;
	}
	if(m==n){
		l=a[1];
		for(int i=2;i<=n;i++){
			l&=a[i];
		}
		cout<<l;
		return 0;
	}
	if(m>2000){
		sort(a,a+n+1);
		cout<<a[n-m+1];
		return 0;
	}
	if(m==n-1){
		int cn[33],ans=a[1],ret=0;
		for(int i=1;i<=n;i++){
			for(int j=0;j<=20;j++){
				cn[j]+=(n&(1<<j));
			}
			ans&=a[i];
		}
		for(int i=1;i<=n;i++){
			int now=ans;
			for(int j=0;j<=20;j++){
				if(!(n&(1<<j))&&cn[j]==n-1){
					now+=(1<<j);
				}
			}
			ret=max(ret,now);
		}
		cout<<ret;
		return 0;
	}
	for(int i=r;i>=0;i--){
		if(ck(i)){
		l=i;
		break;
		}
	}
	cout<<l<<'\n';
	return 0;
}
