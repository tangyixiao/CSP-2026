#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	int a[1000000]={0};
	int max;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(a[i]<a[i-1]){
				int swep=a[i];
				a[i]=a[i+1];
			}
		}	
	}
	for(int i=0;i<m;i++){
		max=a[i] & a[i+1];
	}
	cout<<max;
	return 0;
}
