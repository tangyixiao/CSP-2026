#include <bits/stdc++.h>
using namespace std;
int c[10000001]={},m,n;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin>>m>>n;
    for(int i=0;i<m;i++){
    	cin>>c[i];
	}
	sort(c,c+m);
	cout<<c[m/2];
	return 0;
}
