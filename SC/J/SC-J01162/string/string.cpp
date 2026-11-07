#include<bits/stdc++.h>
using namespace std;
long long n,ans;
string s;
const int N=2e5+10;
struct zf{
	long long m;
	char z;
}a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	if(n==1){
		cout<<"0";
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i].m>>a[i].z;
	}
	int b=1,e=n;
	while(b<e){
		if(a[b].z!=a[e].z){
			ans+=min(a[b].m,a[e].m);
		}
		a[b].m-=min(a[b].m,a[e].m);
		a[e].m-=min(a[b].m,a[e].m);
		if(a[b].m==0){
			b++;
		}
		if(a[e].m==0){
			e--;
		}		
	}
	cout<<ans;
	return 0;
}
