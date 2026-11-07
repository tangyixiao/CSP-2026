#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,a[100010],mmax = 0;
	long long n;
	cin >> n>>m;
	for(int i =1;i<=n;i++){
		cin >> a[i];
	}
	for(int i = 1;i<=n;i++){
		for(int j =1;j<=n;j++){
			if((a[i] and a[j]>mmax)&&i!=j)mmax = a[i] and a[j];
		}
	}
	cout << mmax;
	return 0;
}
