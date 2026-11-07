#include<bits/stdc++.h>
using namespace std;
int a[10005],maxn,s;
void go(int m,int n){
	if(m==2){
		maxn=0;
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				if((a[i]&a[j])>maxn){
					maxn=(a[i]&a[j]);
				}
			}
		}
	}
}
void go2(int m,int n){
	s=a[1];
	for(int i=2;i<=n;i++){
		s=s&a[i];
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		maxn=0;
		for(int i=1;i<=n;i++){
			if(maxn<a[i]){
				maxn=a[i];
			}
		}
		cout<<maxn;
		return 0;
	}
	if(m==2){
		go(m,n);
		cout<<maxn;
	}
	if(m==n){
		go2(m,n);
		cout<<s;
	}
	return 0;
} 