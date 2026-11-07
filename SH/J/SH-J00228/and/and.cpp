#include<bits/stdc++.h>
using namespace std;

int a[100000];

int main(){
	freopen("and.in","r",stdin);
	int n,m;
	cin >> n >>m;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int maxn =0;
	if(m == 2){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(maxn<(a[i]&a[j])){
					maxn =a[i]&a[j];
				}
			}
		}
	}else if(m ==1){
		for(int i=0;i<n;i++){
			if(maxn<a[i]){
				maxn =a[i];
			}
		}
	}
	cout << maxn;
	freopen("and.out","w ",stdout);
	return 0;
}
