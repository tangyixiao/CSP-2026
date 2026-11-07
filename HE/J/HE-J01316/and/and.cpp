#include<bits/stdc++.h>
using namespace std;
const int MAX=1e5;
long long a[2*MAX+5];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	long long a1=0,a2=0;
	for(int i=0;i<n;i++){
		cin>>a[i];a1=max(a1,a[i]);
	}
	if(m==1){
		cout<<a1;return 0;
	}
	if(m==n){
		for(int i=1;i<n;i++){
			a1+=a[i]&a[i-1];
		}cout<<a1;return 0;
	}sort(a,a+n);a1=0;
	if(m==2){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				a1=max(a1,a[i]&a[j]);
			}
		}cout<<a1;return 0;
	}
	for(int i=n-2;i>=0;i--){
		if(a1<m){
			a[i]=a[i]&a[i+1];
		}a1++;
		if(a1==m){
			cout<<a[i+1];return 0;
		}
	}
	return 0;
}
