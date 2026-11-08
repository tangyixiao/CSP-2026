#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[10000]={};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int max_n=-1000;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]!=a[j]){
				if((a[i]&a[j])>max_n)max_n=a[i]&a[j];
			} 
			
		}
	}
	cout<<max_n;
	return 0;
}
