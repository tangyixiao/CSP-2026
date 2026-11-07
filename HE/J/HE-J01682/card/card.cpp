#include <iostream>
using namespace std;
int n,m;
int a[10000000];
int main(){
	freopen("card.in","r",stdin);
	freopen ("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m=1){
		if(n%2==1){
			cout<<n/2+1;
		}
		else
		{
			cout<<n/2;
		}
	}
}
