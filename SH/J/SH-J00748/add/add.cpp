#include<bits/stdc++.h>
using namespace std;
long long a[200005];
long long n,m;
int main(){
	freopen("add.in","r",stdin); 
	freopen("add.out","w",stdout); 
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long y;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[j]<a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	y=a[0];
	for(int i=1;i<m;i++){
		y=y&a[i];
	}
	cout<<y;
	return 0;
}
