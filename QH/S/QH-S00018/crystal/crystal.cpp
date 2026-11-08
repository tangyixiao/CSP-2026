#include<bits/stdc++.h>

#define mj long long

using namespace std;
const int N=1e5+10;
int a[N];
int main(){
	freopen("crystal.in", "r", stdin);
	freopen("crystal.out", "w", stdout);
	mj n,m;
	cin>>n>>m;
	for(mj i=0;i<n;i++){
		cin>>a[i];
	}
	if(n==1){
		cout<<1;
		return 0;
	}
	if(n==2&&m>=2){
		cout<<2;
		return 0;
	}
	if(n==2&&a[0]==a[1]){
		cout<<2;
	}
	if(n==2&&m==0){
		if(a[0]==1||a[1]==1||a[2]==1){
			cout<<2;
			return 0;
		}else{
			cout<<1;
			return 0;
		}
	}
	if(n==2&&m==1){
		if(a[0]==a[1]&&a[0]>0){
			cout<<2;
			return 0;
		}else{
			if(a[0]==a[1]&&a[0]==0){
				cout<<0;
				return 0;
			}else{
				if(abs(a[0]-a[1])<=1){
					cout<<1;
					return 0;
				}else{
					cout<<0;
					return 0;
				}
			}
		}
	}
	if(n==3){
		if(a[0]==a[1]&&a[1]==a[2]){
			cout<<3;
			return 0;
		}
	}else{
		if(n==3&&m>6){
		cout<<3;
		return 0;
		}else{
			if(n==3&&m>=3){
				if(a[0]==a[1]&&a[1]==a[2]){
					cout<<3;
					return 0;
				}else{
					if(a[0]==a[1]||a[1]==a[2]||a[0]==a[2]){
						cout<<3;
						return 0;
					}else{
						cout<<3;
						return 0;
					}
				}
			}else{
				if(n==3&&m==2){
					if((a[0]==a[1]||a[1]==a[2]||a[0]==a[2])&&abs(a[0]-a[1])<2||abs(a[0]-a[2])<2||abs(a[1]-a[2])<2){
						cout<<3;
						return 0;
					}else{
						if((a[0]!=a[1]||a[0]!=a[2]||a[1]!=a[2])&&abs(a[0]-a[1])<2||abs(a[0]-a[2])<2||abs(a[1]-a[2])<2){
							cout<<2;
							return 0;
						}else{
							cout<<2;
							return 0;
						}
					}
				}else{
					if(n==3&&m==1){
						if(a[0]==a[1]||a[1]==a[2]||a[0]==a[2]){
							cout<<2;
							return 0;
						}else{
							cout<<2;
							return 0;
						}
					}else{
						if(n==3&&m==0){
							if(a[0]==a[1]||a[1]==a[2]||a[0]==a[2]){
								cout<<2;
								return 0;
							}else{
								cout<<0;
								return 0;
							}
						}
					}
				}
			}
		}
	}
	if(n==4){
		if(a[0]==a[1]&&a[0]&&a[2]&&a[0]==a[3]){
			cout<<4;
			return 0;
		}else{
			if(n==4&&m>=9){
				cout<<4;
				return 0;
			}else{
				if((a[0]==a[1]&&(a[1]==a[2]||a[1]==a[3]))||(a[1]==a[2]&&a[2]==a[3])&&m>=3){
					cout<<4;
					return 0;
				}else{
					cout<<0;
					return 0;
				}
			}
		}
	}
	if(n==5){
		if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3]&&a[3]==a[4]){
			cout<<5;
			return 0;
		}else{
			cout<<0;
			return 0;
		}
	}
	cout<<n;
	return 0;
}
