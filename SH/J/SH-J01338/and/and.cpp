#include<bits/stdc++.h>

using namespace std;

int n,m;
long long a[200005];


int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(m==1){
		int maxnum=-100000000;
		for(int i=1;i<=n;i++){
			if(a[i]>maxnum)maxnum=a[i];
		}
		cout<<maxnum;
	}
	
	
	
	
	
	 
	return 0;
} 
