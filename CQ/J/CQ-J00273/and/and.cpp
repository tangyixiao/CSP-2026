#include<bits/stdc++.h>
using namespace std;
bool check(double x){
	while(x>1){
		x/=2;
	}
	if(x==1){
		return true;
	}
	return false;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int i;
	int ans=0;
	for(i=n-1;i>=0;i--){
		if(!check((double)a[i])){
			ans=a[i];
			break;
		} 
	}
	int num=0;
	while(num<m-1){
		if(!check((double)a[i--])){
			ans&=a[i];
			num++;
		}
	}
	cout<<ans;
	return 0;
}
