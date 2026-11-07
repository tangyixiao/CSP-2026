#include<bits/stdc++.h>
using namespace std;
string s;
bool f;
long long n,sum;
struct szk{
	long long q;
	char b;
}a[2000005];
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i].q>>a[i].b;
	
	}
	for(int i=1;i<=(n+1)/2;++i){
		long long j;
		if(n%2==0){
			j=n-i+1;
		}else{
			j=n-i;	
		}
		if(a[i].b!=a[j].b&&a[i].q!=a[j].q){
			sum+=min(a[i].q,a[j].q);
		}else if(a[i].b==a[j].b&&a[i].q!=a[j].q){
			sum+=min(abs(a[i].q-a[j].q),abs(a[j].q-a[i].q));
		}else if(a[i].q==a[j].q&&a[i].b!=a[j].b){
			sum+=a[j].q;
		}
	}
	cout<<sum;
}



