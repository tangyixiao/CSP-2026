#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,c,b;
	cin >> n >> m;
	int a[n+5];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<m;i++){
		c=a[i]&a[i+1];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(n-i>3){
				for(int s=1;s<=m;s++){
					b=a[i]&a[j];
				}
			}
		}
		
		if(b>c){
			c=b;
		}
	}
	cout << c;
	return 0;
}

