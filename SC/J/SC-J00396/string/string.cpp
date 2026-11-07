#include <bits/stdc++.h>
using namespace std;
long long n;
long long m,ans;
struct node{
	long long b;
	string s;
}a[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	string x;
	bool y=1;
	cin>>a[1].b>>a[1].s;
	x=a[1].s;
	for(int i=2;i<=n;i++){
		cin>>a[i].b>>a[i].s;
		if(!(a[i].s==x)){
			y=0;
		}
		m+=a[i].b;
	}
	if(y){
		cout<<0;
		return 0;
	}
	if(n==2){
		cout<<max(a[1].b,a[2].b)-min(a[1].b,a[2].b);
		return 0;
	}
	if(m%2){
		for(int i=1;i<=n/2+1;i++){
			if(a[i].s!=a[n-i+1].s){
				if(a[i].b==a[n-i+1].b){
					ans+=a[i].b;
				}else if(a[i].b>a[n-i+1].b){
					a[i].b-=a[n-i+1].b;
					ans+=a[n-i+1].b;
					for(int j=n-i;j>i;j--){
						if(a[i].s!=a[j].s){
							if(a[i].b==a[j].b){
								ans+=a[i].b;
								a[i].b=a[j].b=0;
								break;
							}else if(a[i].b>a[j].b){
								a[i].b-=a[j].b;
								ans+=a[j].b;
								a[j].b=0;
							}else{
								a[j].b-=a[i].b;
								ans+=a[i].b;
								a[i].b=0;
							}
						}else{
							a[j].b=0;
						}
					}
					a[n-i+1].b=0;
				}else{
					a[n-i+1].b-=a[i].b;
					ans+=a[i].b;
					for(int j=i+1;j<=n-i;j++){
						if(a[n-i+1].s!=a[j].s){
							if(a[n-i+1].b==a[j].b){
								ans+=a[n-i+1].b;
								a[n-i+1].b=a[j].b=0;
								break;
							}else if(a[n-i+1].b>a[j].b){
								a[n-i+1].b-=a[j].b;
								ans+=a[j].b;
								a[j].b=0;
							}else{
								a[j].b-=a[n-i+1].b;
								ans+=a[n-i+1].b;
								a[n-i+1].b=0;
							}
						}else{
							a[j].b=0;
						}
					}
					a[i].b=0;
				}
			}else{
				if(a[i].b==a[n-i+1].b){
					a[i].b=a[n-i+1].b=0;
				}else if(a[i].b>a[n-i+1].b){
					a[i].b-=a[n-i+1].b;
					ans+=a[n-i+1].b;
					for(int j=n-i;j>i;j--){
						if(a[i].s!=a[j].s){
							if(a[i].b==a[j].b){
								ans+=a[i].b;
								a[i].b=a[j].b=0;
								break;
							}else if(a[i].b>a[j].b){
								a[i].b-=a[j].b;
								ans+=a[j].b;
								a[j].b=0;
							}else{
								a[j].b-=a[i].b;
								ans+=a[i].b;
								a[i].b=0;
							}
						}else{
							a[j].b=0;
						}
					}
					a[n-i+1].b=0;
				}else{
					a[n-i+1].b-=a[i].b;
					ans+=a[i].b;
					for(int j=i+1;j<=n-i;j++){
						if(a[n-i+1].s!=a[j].s){
							if(a[n-i+1].b==a[j].b){
								ans+=a[n-i+1].b;
								a[n-i+1].b=a[j].b=0;
								break;
							}else if(a[n-i+1].b>a[j].b){
								a[n-i+1].b-=a[j].b;
								ans+=a[j].b;
								a[j].b=0;
							}else{
								a[j].b-=a[n-i+1].b;
								ans+=a[n-i+1].b;
								a[n-i+1].b=0;
							}
						}else{
							a[j].b=0;
						}
					}
					a[i].b=0;
				}
			}
		}
	}else{
		for(int i=1;i<=n/2;i++){
			if(a[i].s!=a[n-i+1].s){
				if(a[i].b==a[n-i+1].b){
					ans+=a[i].b;
				}else if(a[i].b>a[n-i+1].b){
					a[i].b-=a[n-i+1].b;
					ans+=a[n-i+1].b;
					for(int j=n-i;j>i;j--){
						if(a[i].s!=a[j].s){
							if(a[i].b==a[j].b){
								ans+=a[i].b;
								a[i].b=a[j].b=0;
								break;
							}else if(a[i].b>a[j].b){
								a[i].b-=a[j].b;
								ans+=a[j].b;
								a[j].b=0;
							}else{
								a[j].b-=a[i].b;
								ans+=a[i].b;
								a[i].b=0;
							}
						}else{
							a[j].b=0;
						}
					}
					a[n-i+1].b=0;
				}else{
					a[n-i+1].b-=a[i].b;
					ans+=a[i].b;
					for(int j=i+1;j<=n-i;j++){
						if(a[n-i+1].s!=a[j].s){
							if(a[n-i+1].b==a[j].b){
								ans+=a[n-i+1].b;
								a[n-i+1].b=a[j].b=0;
								break;
							}else if(a[n-i+1].b>a[j].b){
								a[n-i+1].b-=a[j].b;
								ans+=a[j].b;
								a[j].b=0;
							}else{
								a[j].b-=a[n-i+1].b;
								ans+=a[n-i+1].b;
								a[n-i+1].b=0;
							}
						}else{
							a[j].b=0;
						}
					}
					a[i].b=0;
				}
			}else{
				if(a[i].b==a[n-i+1].b){
					a[i].b=a[n-i+1].b=0;
				}else if(a[i].b>a[n-i+1].b){
					a[i].b-=a[n-i+1].b;
					ans+=a[n-i+1].b;
					for(int j=n-i;j>i;j--){
						if(a[i].s!=a[j].s){
							if(a[i].b==a[j].b){
								ans+=a[i].b;
								a[i].b=a[j].b=0;
								break;
							}else if(a[i].b>a[j].b){
								a[i].b-=a[j].b;
								ans+=a[j].b;
								a[j].b=0;
							}else{
								a[j].b-=a[i].b;
								ans+=a[i].b;
								a[i].b=0;
							}
						}else{
							a[j].b=0;
						}
					}
					a[n-i+1].b=0;
				}else{
					a[n-i+1].b-=a[i].b;
					ans+=a[i].b;
					for(int j=i+1;j<=n-i;j++){
						if(a[n-i+1].s!=a[j].s){
							if(a[n-i+1].b==a[j].b){
								ans+=a[n-i+1].b;
								a[n-i+1].b=a[j].b=0;
								break;
							}else if(a[n-i+1].b>a[j].b){
								a[n-i+1].b-=a[j].b;
								ans+=a[j].b;
								a[j].b=0;
							}else{
								a[j].b-=a[n-i+1].b;
								ans+=a[n-i+1].b;
								a[n-i+1].b=0;
							}
						}else{
							a[j].b=0;
						}
					}
					a[i].b=0;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}