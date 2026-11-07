#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a;
	cin>>a;
	int x[1001],q,n;
	q=0;
	n=0;
	char y[1001],z[100001];
	for(int i=1;i<=a;i++){
		cin>>x[i]>>y[i];
		for(int s=q+1;s<=x[i]+q;s++){
			z[s]=y[i];
		}
		q=q+x[i];
	}
		for(int i=1;i<=q/2;i++){
			if(z[i]!=z[q+1-i]) n=n+1;
		}
	cout<<n<<endl;
	return 0;
}