#include<bits/stdc++.h>
using namespace std;
int n,m,Max=-99999;
long long a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n-m+1;i++){
		int sum=a[i];
		for(int j=i+1;j<=i+m-1;j++){
			sum&=a[j];
			Max=max(Max,sum);
		}
	}
	cout<<Max;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
