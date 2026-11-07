#include <bits/stdc++.h>
using namespace std;
long long a[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=0; i<n; i++){
		cin>>a[i]; 
	}
	for(int i=0; i<m; i++){
		cout<<n<<" ";
	}
}
