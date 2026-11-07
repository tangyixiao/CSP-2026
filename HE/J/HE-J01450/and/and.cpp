#include<bits/stdc++.h>
using namespace std;
long long a[200005];
long long cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int z=0;
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		if(n%2==1){
			cout<<a[n/2];
			return 0;
		}
		
	} 
	return 0;
}
