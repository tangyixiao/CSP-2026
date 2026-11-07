#include<bits/stdc++.h>
using namespace std;
int a[10010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n;
	cin>>n;
	int m;
	cin>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int t;
		t=a[i];
		if(a[i]>t){
			cout<<a[i];
			return 0;
		}
	}
	return 0;
}
