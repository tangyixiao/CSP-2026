#include<bits/stdc++.h>//and
using namespace std;
const int N=1e6+100;
int a[N];
int main(){
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	int n,m,k;
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		if(a[i]<a[i-1]&&a[i]*k==a[i-1]&&k%2!=0){
			return a[i];
		}else if(a[i]<a[i-1]&&a[i]*k==a[i-1]&&k%2==0){
			return 0;
		}else if(a[i]>a[i-1]){
			cout<<a[i-1];
			if(a[i]>a[i-1]>0){
				return a[i];
			}else if(0>a[i]>a[i-1]){
				cout<<0;
			}else if(a[i-1]>0>a[i]){
				cout<<a[i-1];
			}
		}
	}
			return 0;
		}
