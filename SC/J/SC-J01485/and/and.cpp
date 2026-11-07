#include<bits/stdc++.h>
using namespace std;

const int N=200010;
long long a[N];

int main()
{
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	
	long long ma=-1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>ma) ma=a[i];
	}
	
	if(m==1) cout<<ma;
	else if(m==2){
		int ma1;
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				if(i!=j){
					int b=a[i]&a[j];
					ma1=max(ma1,b);
				}
			}
		}
		cout<<ma1;
	}
	
	


	return 0;
}
