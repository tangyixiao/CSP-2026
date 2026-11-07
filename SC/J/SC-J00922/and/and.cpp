#include<bits/stdc++.h>
using namespace std;
int n,m,ma;
int a[200010];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	if(m==1){
		cout<<a[1];
		return 0;
	}else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ma=max(a[i]&a[j],ma);
			}
		}
		cout<<ma;
		return 0;
	}else {
		int x=a[1]&a[2];
		for(int i=3;i<=m;i++){
			x=x&a[i];
		}
		cout<<x;
        return 0;
	}
}