#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	vector<int> a(n+1);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long max1=0;
	for(int i=1;i<n;i++){
		long long p=(a[i]&a[m-1+i]);
		if(max1<=p){
			max1=p;
		}
	}
	cout<<max1;
}
