#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int m,n;
	cin>>m>>n;
	cout<<n;
	for(int i=1;i<n;i++)
		cout<<" "<<m;
    return 0;
}
