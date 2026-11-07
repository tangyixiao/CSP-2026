#include<bits/stdc++.h>
using namespace std;
long long a666[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i = 0;i<n;i++){
		cin>>a666[i];
	}
	sort(a666,a666+n);
	long long sum = a666[n-1];
	for(int i = n-2;i>=n-m;i--){
		sum &= a666[i];
	}
	cout<<sum;
	
}
