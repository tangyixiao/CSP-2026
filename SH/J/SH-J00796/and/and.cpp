#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n,m,sum,tem,f;
	int a[200000],b[200000];
	cin >> n >> m;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
			if(a[i]<a[i+1]){
				tem=a[i];
				a[i]=a[i+1];
				a[i+1]=tem;
				f=false;
			}
		}
		if(f){
			break;
		}
	}
	for(int i=0; i<m; i++){
		b[i]=a[i];
	}
	for(int i=0; i<m; i++){
		cout << b[i] << " ";
	}
	for(int i=0; i<m-1; i++){
		sum=b[i]&b[i+1];
	}
	cout << sum;
	
	
	return 0;
} 
