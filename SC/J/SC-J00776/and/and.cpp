#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],cnt;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			if(a[i]>cnt){
				cnt=a[i];
			}
		}
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if((a[i]&a[j])>cnt){
					cnt=(a[i]&a[j]);
				}
			}
		}
	}
	cout<<cnt;
	return 0;
}