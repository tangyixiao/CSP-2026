#include<bits/stdc++.h>
using namespace std;
int a[200001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a,a+n);
		cout<<a[n-1];
	}else if(m==2){
		int ma=INT_MIN;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				ma=max(ma,a[i]&a[j]);
			}
		}
		cout<<ma;
	}else{
		int b=a[0];
		for(int i=1;i<n;i++){
			b=a[i]&b;
		}
		cout<<b;
	}
	return 0;
} 

