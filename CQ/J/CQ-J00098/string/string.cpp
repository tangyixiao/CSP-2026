#include<bits/stdc++.h>
#define int long long 
using namespace std;

const int N=2e5+5;

int a[N];
char c[N];

signed main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	
	cin>>n;
	
	for (int i=1;i<=n;i++){
		
		cin>>a[i]>>c[i];
			
	}
	
	int l=1,r=n;
	int x=a[1],y=a[n],ans=0;
	
	while (1){
		
		if (l>=r) break;
		
		if (x>y){
			
			if (c[l]!=c[r]) ans+=y;
			x-=y; y=a[--r]; 
			
		}else if (y>x){
			
			if (c[l]!=c[r]) ans+=x;
			y-=x; x=a[++l]; 
			
		}else if (x==y){
			
			if (c[l]!=c[r]) ans+=x;
			x=a[++l],y=a[--r];
			
		}
			
	}
	
	cout<<ans;
	
	return 0;
	
} 	
