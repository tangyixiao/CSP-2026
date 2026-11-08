#include <bits/stdc++.h> 
using namespace std;
char a[1000005],q;
int z=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long c=0,m,k=1;
	for(int i=1;i<=n;i++){
		cin>>m; 
		cin>>q;
		c+=m;
		for(int j=1;j<=m;j++){
			a[k]=q;
			k++;
		}
	}
	for(int i=0;i<c;i++){
		if(a[c]!=a[i+1])
		    z++;
	}
	cout<<z/2;
	return 0;
}
