#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,ans;
struct A{
	ll hoa;
	char x;
}a[200005];
/*struct B{
	ll hob;
	char y;
}b[200005];if(a[i].hoa>a[j].hoa)*/
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].hoa>>a[i].x;
		//b[j].hob=a[i].hoa;
		//b[j].y=a[i].x;
	}
	for(int i=0,j=n-1;i<n/2;i++,j--){
		if(a[i].x!=a[j].x){
			if(a[i].hoa==a[j].hoa){
				ans+=a[j].hoa;
			}
			else {
				a[j-1].hoa-=abs(a[i].hoa-a[j].hoa);
				ans+=max(a[i].hoa,a[j].hoa);
			}
		}
	}
	cout<<ans;
	return 0;
}
