#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n,len,a[N];char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	int cost=0,lb=1,rb=n;
	while(lb<rb){
		if(c[lb]==c[rb]){
			int fk=min(a[lb],a[rb]);
			a[lb]-=fk;a[rb]-=fk;
			if(a[lb]<a[rb]){
				lb++;
			}
			else{
				rb--;
			}
		}
		else{
			int fk=min(a[lb],a[rb]);
			cost+=fk;a[lb]-=fk;a[rb]-=fk;
			if(a[lb]<a[rb]){
				lb++;
			}
			else{
				rb--;
			}
		}
	}
	cout<<cost; 
	return 0;
}
