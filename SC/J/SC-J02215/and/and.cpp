#include<bits/stdc++.h>
using namespace std;
long long a[200005];
long long ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	//cout<<(1&5&7);
	
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	if(m==1){//6
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
	}
	else if(n==m){//7
		for(int i=1;i<=n;i++){
			ans=(ans&a[i]);
		}
	}
	else if(m==2){//8~10
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,(a[i]&a[j]));
				
			}
		}
	}else {//13~15
		ans=0;
	}
	
	cout<<ans;
	
	return 0;
}

//A13:输出0 
//B14 15: 输出0 