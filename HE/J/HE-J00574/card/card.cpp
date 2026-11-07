#include <bits/stdc++.h>
using namespace std;
long long n,m;
int x[50005],y[50005],v=0;

int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	cin>>n>>m;
	for (int i=0;i<n;i++){
		cin>>x[i];
	}
	for (int i=0;i<n;i++){
		y[i]=x[i];
		if (y[i]==y[i-2]){
			v++;
		}
	}
	
    return 0;
}
