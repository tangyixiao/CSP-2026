#include<bits/stdc++.h> 
using namespace std;
long long a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	long long sum=0;
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	if(m==n){
		sum+=a[1];
		for(int i=2; i<=n; i++){
			sum=(sum&a[i]);
		}
	}else if(m==1){
		sum=a[1];
		for(int i=2; i<=n; i++){
			sum=max(sum,a[i]);
		}
	}else if(m==2){
		sort(a+1,a+n+1);
		for(int i=1; i<=n; i++){
			int ans=1;
			for(int j=i; j<=i; j++){
				if(a[i]==a[j]){
					sum=a[i];
					break;
				}
			}
		}
	}
	cout << sum;
	return 0;
}