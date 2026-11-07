#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","W",stdout);
	int n,a[200005],y=1;
	string c[200005],x[1000000000];
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i] >> c[i];
		for(int j=1;j<=a[i];j++){
			x[y]==c[i];
			y++;
			cout <<x[y];
		}
	}
	int l=1,r=n;
	while(l<=r){
		if(x[l]!=x[r]){
			x[r]==x[l];
		}
	}
	for(int i=1;i<=y;i++){
		cout << x[i];
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
