#include<bits/stdc++.h>
using namespace std;
int a[11111111],ma=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n; 
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			ma=max(ma,(a[i]&a[j]));
		}
	}
	cout<<ma;
	return 0;
}
