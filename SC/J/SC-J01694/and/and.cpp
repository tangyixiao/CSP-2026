#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int *num=new int [n];
	for(int i=1;i<n;i++){
		cin>>num[i];
	}
	sort(num,num+n,sizeof(int)*n);
	int ans=num[n-1];
	for(int i=n-1-1;i>n-1-m;i--){
		ans&=num[i];
	}
	cout<<ans;
	return 0;
}