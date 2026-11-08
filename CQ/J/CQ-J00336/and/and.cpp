#include <bits/stdc++.h>
using namespace std;
long long max_a=-1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	long long a[n+5];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n+1);
	if(m==1){
		cout<<a[n-1];
		return 0;
	}
	max_a=a[n-1]&a[n-2];
	int w=1;
	for(int i=n-1;i>=0;i++){

		while(m>1){
			max_a=max_a&a[i-w];
			for(int j=i-w;j>=0;j--){
				max_a=max(max_a,max_a&a[j]);
				if(max_a==a[j]) break;
			}
			m--;
			w++;
		}
	}
	cout<<max_a;
	return 0;
}
