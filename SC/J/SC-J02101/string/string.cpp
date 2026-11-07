#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long n,a[N],ans,l,r,suml,sumr,mn,okl,okr;
char c[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	
	l=1,r=n+1;
	for(int l=1;l<=n;l++){
		suml+=a[l];
		
		mn=min(suml-okl,sumr-okr);
		if(c[l]!=c[r])ans+=mn;
		okl+=mn,okr+=mn;
		
		while(suml>sumr){
			r--;
			sumr+=a[r];
			mn=min(suml-okl,sumr-okr);
			if(c[l]!=c[r])ans+=mn;
			okl+=mn,okr+=mn;
		}
		//cout<<l<<' '<<ans<<'\n'; 
	}
	
	cout<<ans/2;
	return 0;
}