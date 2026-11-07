#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(m%2==2||m%2==1||m/2==0){
			   cout<<m;
			}
		}
	}
	cout<<m;
	return 0;
}
