#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long ans;
int n,m;
int a[N];
bool emp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	cout<<a[m];
	return 0;
} 
