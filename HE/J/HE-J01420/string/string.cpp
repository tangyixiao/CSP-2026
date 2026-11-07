#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+10;
struct node{
	ll q;
	char c;
}a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n,cnt=0;
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a[i].q>>a[i].c;
	}
	for(ll i=1,j=n;i<=j;){
		if(i==j)break;
		ll o=min(a[i].q,a[j].q);
		if(a[i].c!=a[j].c){
			cnt+=o;
		}
		a[i].q-=o;
		a[j].q-=o;
		if(a[i].q==0)i++;
		if(a[j].q==0)j--;
	}
	cout<<cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
