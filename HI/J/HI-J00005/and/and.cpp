#include<bits/stdc++.h>
using namespace std;
long long n,m,max1=0;
long long a[200001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1 ; i<=n ; i++){
		cin >> a[i];
	}
	if(m==2){
		for(int i=1 ; i<=n ; i++){
			for(int j=i+1 ; j<=n ; j++){
				max1=max(max1,(a[i] & a[j]));
			}
		}
	}
	else if(m==n){
		max1=a[1];
		for(int i=2 ; i<=n ; i++){
			max1=(max1 & a[i]);
		}
	}
	else{
		for(int i=1 ; i<=n ; i++){
			max1=max(max1,a[i]);
		}
	}
	cout << max1;
	return 0;
}


