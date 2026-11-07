#include <bits/stdc++.h>
using namespace std;
int m,n;
long long x[20005]={},v=0;

int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	cin>>m>>n;
	for (int i=0;i<m;i++){
		cin>>x[i];
		
	}
	for (int i=1;i<m;i++){
		v=min(x[i],x[i-1]);
	}
	
	cout<<v;
    return 0;
}
