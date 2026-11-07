#include<iostream>
using namespace std;
long long ans;
char c[200002];
int n,a[200002];
bool z_1;
int hui(long long ans,int less,int more){
	if(less==more){
		return ans;
	}
	if(a[less]>a[more]){
		int z=less;
		less=more;
		more=z;
		z_1=!z_1;
	}
	if(c[less]!=c[more]){
		ans+=a[less];
	}
	a[more]=a[more]-a[less];
	    hui(ans,--less,more);
	else
	    hui(ans,++less,more);
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>c[i];
	cout<<hui(ans,1,n);
	return 0;
}