#include <bits/stdc++.h>
using namespace std;
struct l{
	int b;
	char p;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,c=0;
	cin>>n;
	l a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].b>>a[i].p;
		c+=a[i].b;
	}	
	if(a[0].b>=c-a[0].b){
		cout<<c-a[0].b;
		return 0;
	}
	long long k=0;
	for(int i=0,j=n-1;i<=(n+1)/2;i++,j--){
		if(a[i].p!=a[j].p){
			if(a[i].b>a[j].b) k+=a[j].b;
			else if(a[i].b<a[j].b)k+=a[i].b;		
		}
	}

	cout<<k;

	return 0;
}
