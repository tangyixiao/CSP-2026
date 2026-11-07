#include<bits/stdc++.h>
using namespace std;
int a[200005];	
int n,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	int ans=0;
	ans=a[1];
	int max=0;
	for(int i=1;i<=n-m+1;i++){
		for(int j=1;j<m;j++){
		ans=(ans&a[i]);
		}	
		if(ans>max)max=ans;
		ans=a[i];
	}
	cout << max;
	fclose(stdin);
	fclose(stdout);
	return 0;
}