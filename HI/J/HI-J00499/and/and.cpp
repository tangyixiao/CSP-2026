#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=200005;
int a[N],b[N],d[N],j=0,c=0;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,max=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		if(a[i]>max){
			a[i]=max;
		} 
		if(max==2*i-1){
			cout<<max-1;
		}
	}
	return 0;
} 
