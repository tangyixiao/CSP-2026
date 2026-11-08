#include <bits/stdc++.h>
using namespace std;

long long a[200005];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	sort(a+1,a+1+n);
	if(m==n){
		long long p=a[1];
		for(int i=2;i<=n;i++){
			p=p&a[i];
		}	
		cout << p;
		return 0;
	}
	if(m==2){
		long long p=-1e12;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				p=max(p,a[i]&a[j]);
			}
		}
		cout << p;
		return 0;
	}
	long long p=-1e12;
	for(int i=1;i<=n;i++){
		p=max(p,a[i]);
	}
	cout << p;
	return 0;
}
