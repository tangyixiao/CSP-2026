#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.ans","w",stdout);
	int n;
	cin>>n;
	int m;
	cin>>m;
	int a[1000000000005];
	long long p[10000005]={1};
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i==1){
			p[i-1]=a[i]; 
		}
		p[i]+=p[i-1]&a[i]; 
	}
	cout<<p[3];
	
	return 0;
} 
