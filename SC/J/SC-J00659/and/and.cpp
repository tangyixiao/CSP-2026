#include<bits/stdc++.h>
using namespace std;
int a[200010];
int m,n; 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,maxa=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<"1";
		return 0;
	}
	else{
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				int x=a[i]&a[j];
				if(i!=j&&x>maxa) maxa=x;
			}
		}
	}
	cout<<maxa;
	return 0;
} 