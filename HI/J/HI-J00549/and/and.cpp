#include<bits/stdc++.h>
using namespace std;
int n,m,a[100010],s=1;
int main(){
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		int b;
		for(int j=1;j<m;j++){
			b=a[j+i]&a[j+i+1];
			
		}
		if(b>s){
			s=b;
		}
	}
	cout<<s;
	return 0;
}
