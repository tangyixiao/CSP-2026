#include<bits/stdc++.h>
using namespace std;
int a,b,c[1000000],max1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>a>>b;
	for(int i=0;i<a;i++){
		cin>>c[i];
		max1=max(max1,c[i]);
	}
	cout<<max;
	return 0;
}
