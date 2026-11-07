#include <bits/stdc++.h>
using namespace std;
long long a[200000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n,max;
	cin>>m>>n;
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	if(n==1){
		max=a[0];
		for(int j=0;j<m;j++){
			int s=a[j];
			if(max<s){
				max=s;
			}
		}
	}
	if(n==2){
		max=a[0]&a[1];
		for(int i=0;i<m;i++){
			for(int j=i;j<m;j++){
				int s=a[i]&a[i+j];
				if(max<s){
					max=s;
				}
			}
		}
	}
	if(n==m){
		max=a[0];
		for(int i=1;i<m;i++){
			max=max&a[i];
		}
	}
	cout <<max;
	return 0;
}