#include<bits/stdc++.h>
using namespace std;

bool cmp(long long x,long long y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	long long a[200005]; 
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	if(m==1){
		cout<<a[1];
		return 0;
	}
	if(m==2){
		cout<<a[2]; //´Î´óÊý 
		return 0;
	}
	cout<<a[m];
	return 0;
} 
