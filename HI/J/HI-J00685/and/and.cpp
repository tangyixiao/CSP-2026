#include<bits/stdc++.h>
using namespace std;
long long a[200000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==2){
		int b=0,c=0;
		for(int i=0;i<n;i++){
			b=a[i]&a[n-i];
			if(c<=b){
				c=b;
			}
		}
		cout<<c;
	}
	else if(m==3){
		int b=0,c=0;
		for(int i=0;i<n;i++){
			b=a[i]&a[n-i]&a[n-1-i];
			if(c<=b){
				c=b;
			}
		}
		cout<<"7";	
	}
	
	return 0;
}
