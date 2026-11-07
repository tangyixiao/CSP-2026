#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n;
	int m;
	cin>>m>>n;
	int s[1000005];
	int a[1000004];
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	for (int i=1;i<=n;i++){
		whlie(a[i]==0){
			s[i]=a[i]%2;
			a[i]/=2;
			if (a[i]==1)	{
				break;
			}	
		}
	}
	int b;
	for (int i=1;i<=n;i++){
		for(int i=1;i<=m;i++){
			b=s[i]&s[i+1];
		}
	}
	int max;
	for (int i=1;i<=n;i++){
		max=a[i];
		if (a[i]<a[i+1]){
			max=a[i+1];
		}
	}
	cout<<max;
	return 0;
} 