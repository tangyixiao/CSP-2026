#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int max=INT_MIN;
	int a[n+11];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=i;j<=n;j++){
			if(a[i]&a[j]>max){
				max=a[i]&a[j];
			}
		}
	}
	cout<<max;
	return 0;
}
