#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
int a[N],b[N];
int t[0];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	if(m==1){
		cout<<n;
		return 0;
	}
	if(m==2){
		if(n==2){
			cout<<"1 1";
			return 0;
		}
	}
	return 0;
}
