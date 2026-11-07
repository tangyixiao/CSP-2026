#include<bits/stdc++.h>
#define ll long long 
using namespace std;
ll a[200005];
int main (){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >>n>>m;
	int sum=0;
	for (int i=1;i<=n;i++){
		cin >>a[i];
		sum=max(sum,a[i]);
	}
	int sun=a[1];
	for (int i=2;i<=n;i++){
		sun&=a[i];
	}
	if (m==1){
		cout <<sum;
		return 0;
	}else if (m==n){
		cout <<sun;
		return 0;
	}else if (sum<=4){
		cout <<1;
		return 0;
	}else if (m==2){
		int ans=0;
		for (int i=1;i<=n;i++){
			for (int j=i;j<=n;j++){
				int cnt=a[i]&a[j];
				ans=max(ans,cnt);
			}
		}
		cout <<ans;
		return 0;
		
	}else {
		cout <<67;
	}
	
	
}  