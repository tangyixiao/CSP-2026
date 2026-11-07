#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,e;
ll a[200005];
bool cmp(ll x,ll y)
{
	return x>y;	
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	//if(n<=2000){
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n,cmp);
		e=a[0];
		for(int i=1;i<m;i++){
			e=e&a[i];
		}
/*	}	
	else{
		e=n-2;
		for(int i=1;i<=m;i++){
			e=e&(e-1);
			e--;
		}
	}*/
	cout<<e;
	return 0; 
} 
