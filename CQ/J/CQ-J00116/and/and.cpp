#include<bits/stdc++.h>
using namespace std;

int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	int a[100005];
	cin >> n >> m;
	int maxxx=0;
	for(int i=1;i<=n;i++){
		int x;
		cin >> x;
		maxxx = max(maxxx,x);
		int flag=1;
		while(x){
			a[i]+=(x%2)*flag;
			flag*=10;
			x/=2;
		}
	}
	
	if(m==1){
		cout << maxxx;
		return 0;
	}
	
	int maxx=0;
		
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			int flag=1;
			int ans=0;
			int a1=a[i],b1=a[j];
			for(int o=1;;o++){
				if(a1==0||b1==0) break;
				if(a1%10==1 && b1%10==1){
					ans+=flag;
				}
				flag*=2;
				a1/=10;
				b1/=10;
			}
			maxx = max(ans,maxx);
		}
	}
	cout << maxx;
	
	

	return 0;



}

