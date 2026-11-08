#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	long long a[n+1];
	char b[n+1];
	for (int i=1;i<=n;i++){
		cin >> a[i] >> b[i];
	}
	int x=1,y=n;
	long long sum=0;
	while (x<y){
		if (b[x]!=b[y]){
			sum+=min(a[x],a[y]);
		}
		if (a[x]>a[y]){
			a[x]-=a[y];
			y--;
		}else if (a[x]<a[y]){
			a[y]-=a[x];
			x++;
		}else{
			x++;
			y--;
		}
	}
	cout << sum;
}
