#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[20010];
char c[20010];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    	cin>>c[i];
	}
    if(n==1){
    	cout<<0;
	}
	if(n==2){
		int z=0;
		if(a[1]%2==0){
			z=a[1]/2;
		}
		if(a[2]%2==0){
			z=a[2]/2;
		}
		cout<<z;
	}
	cout<<n*a[1]/2;
	return 0;
}
