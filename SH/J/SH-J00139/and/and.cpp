#include<bits/stdc++.h>
using namespace std;
long long a,b,c[200100],ans=1073741823;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>a>>b; 
	for(int i=1;i<=a;++i){
		cin>>c[i];
	}
	sort(c+1,c+a+1);
	for(int i=a;i>=a-b;--i){
		ans&=c[i];
	}
	cout<<ans;
	return 0;
}
