#include<bits/stdc++.h>
using namespace std;
struct pe{
	long long a;
	char b;

}q[200005];
int main(){
	long long n;
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>q[i].a>>q[i].b;
	}
	if(n==1) {
		cout<<0;
		return 0;
	}

	if(n/2==0){
		cout<<n/2;
		return 0;
	}if(n/2==1){
		cout<<(n+1)/2-1;
		return 0;
	}
	return 0;
}