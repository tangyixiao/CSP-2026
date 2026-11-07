#include<bits/stdc++.h>
using namespace std;
const int N=2*10e5;
long long n,m,a[N],s=-1;
bool f[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		f[i]=0;
	}
	int s=1073741823;
	for(int i=1;i<=m;i++){
		long long jk=0,ma=-1;
	    for(int j=1;j<=n;j++){
	    	if(f[j])continue;
	    	if(ma<(s&a[j])){
	    		ma=s&a[j];
	    		jk=j;
			}
		}
		s=ma;
		f[jk]=1;
	}
    cout<<s;
	return 0;
} 
