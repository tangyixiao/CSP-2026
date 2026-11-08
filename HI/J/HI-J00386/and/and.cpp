#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005],maxh,maxw,h,w,x;
bool f[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i!=j){
				if(h==1){
					if(maxw<a[i]&a[j]){
					w=j;
					x=i;
					maxw=a[i]&a[j];
				}
				}else{
					maxw=a[i]&a[j];
					w=j;
					x=i;
					h=1;
				}
			}
		}
	}
	maxh=maxw;
	f[w]=1;
	f[x]=1;
	h=0;
	for(int i=3;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(f[j]!=1){
				if(h==1){
				if(maxw<maxh&a[j]){
					w=j;
					maxw=maxh&a[j];
				}
			}else{
				maxw=maxh&a[j];
				w=j;
				h=1;
			}
			}
		}
		maxh=maxw;
		f[w]=1;
		h=0;
	}
	cout<<maxh;
	return 0;
}
