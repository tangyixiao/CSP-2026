#include <bits/stdc++.h>
using namespace std;
long long ies[9090901];
long long ldy[9090901];
int main(){
    freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long k,h,s,d,ark=0;
	cin>>k>>h;
	for(int i=1;i<=k;i++){
		cin>>ies[i];
	}
	sort(ies+1,ies+k+1);
	for(int i=1;i<=k;i++){
		ldy[i]=ies[i];
	}
	for(int i=1;i<=h;i++){
		ark=ies[i]&ies[i+1];
		ies[i]=ark;
		max=ark;
	}
	cout<<ark;
	return 0;
}
