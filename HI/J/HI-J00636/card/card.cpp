#include<bits/stdc++.h>
using namespace std;
int n,x[500005],y;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>y;
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	for(int i=0;i<y;i++){
		cout<<n<<' ';
	}
	return 0;
}
