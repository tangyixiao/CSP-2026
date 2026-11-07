#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,m;
	cin>>n>>m;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				int k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
		
	}
	int s=a[0];
	for(int i=0;i<m-1;i++){
		s=s&a[i+1];
	}
	cout<<s;
	return 0;
}
