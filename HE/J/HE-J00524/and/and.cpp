#include<bits/stdc++.h>
using namespace std;
int n,m,x=0;
int a[100001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=1;i<=m;j++){
			if(a[j]&a[j+1]>x){
				x=a[j]&a[j+1];
			}
		}
	}cout<<x;
	return 0;
}
