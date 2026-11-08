#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,cnt=0;
	cin>>n>>m;
	int a[n];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==j){
				cnt+=0;
			}
			else if(cnt<=a[i]&a[j]){
				cnt=a[i]&a[j];
			}
		}
	}cout<<cnt;
	return 0;
}
