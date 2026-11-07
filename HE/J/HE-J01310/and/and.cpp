#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	int a[100005];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	
	for(int i=n-1;i>n-m;i--){
		if(a[i]%2==0&&a[i]/a[i-1]%2==0){
			m++;
		}
		
	}
	cout<<a[n-m];
	return 0;
}
