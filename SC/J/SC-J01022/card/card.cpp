#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+11]={0};
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m<=2){
		if(m==1){
			cout<<n;
			return 0;
		}
		if(m==2){
			if(n<=5){
				if(a[n-1]==a[n]) if(a[n]==2) cout<<0<<" "<<n; else cout<<n<<" "<<0;
				else{
					if(a[n]==2){
						if(n==1) cout<<0<<" "<<n;
						else if(n==2) cout<<n-1<<" "<<n;
						else if(n==3){
							if(a[1]==1){
								cout<<2<<" "<<3;
							}
							else{
								cout<<1<<" "<<3;
							}
						}
						else if(n==4){
							if(a[1]==1&&a[2]==1){
								cout<<3<<" "<<4;
							}
							else if(a[1]==1&&a[2]==2){
								cout<<2<<" "<<4;
							}
							else if(a[1]==2&&a[2]==1){
								cout<<3<<" "<<4; 
							}
							else {
								cout<<1<<" "<<4;
							}
						}
						else{
							if(a[1]==1&&a[2]==1&&a[3]==1){
								cout<<4<<" "<<5;
							}
							else if(a[1]==1&&a[2]==1&&a[3]==2){
								cout<<3<<" "<<5;
							}
							else if(a[1]==1&&a[2]==2&&a[3]==1){
								cout<<4<<" "<<5;
							}
							else if(a[1]==1&&a[2]==2&&a[3]==2){
								cout<<2<<" "<<5;
							}
							else if(a[1]==2&&a[2]==1&&a[3]==1){
								cout<<4<<" "<<5;
							}
							else if(a[1]==2&&a[2]==1&&a[3]==2){
								cout<<2<<" "<<5;
							}
							else if(a[1]==2&&a[2]==2&&a[3]==1){
								cout<<4<<" "<<5;
							}
							else if(a[1]==2&&a[2]==2&&a[3]==2){
								cout<<1<<" "<<5;
							}
						}
					}
					if(a[n]==1){
						if(n==1) cout<<n<<" "<<0;
						else if(n==2) cout<<n<<" "<<n-1;
						else if(n==3){
							if(a[1]==1){
								cout<<3<<" "<<2;
							}
							else{
								cout<<3<<" "<<1;
							}
						}
						else if(n==4){
							if(a[1]==1&&a[2]==1){
								cout<<4<<" "<<3;
							}
							else if(a[1]==1&&a[2]==2){
								cout<<4<<" "<<2;
							}
							else if(a[1]==2&&a[2]==1){
								cout<<4<<" "<<3; 
							}
							else {
								cout<<4<<" "<<1;
							}
						}
						else{
							if(a[1]==1&&a[2]==1&&a[3]==1){
								cout<<5<<" "<<4;
							}
							else if(a[1]==1&&a[2]==1&&a[3]==2){
								cout<<5<<" "<<3;
							}
							else if(a[1]==1&&a[2]==2&&a[3]==1){
								cout<<5<<" "<<4;
							}
							else if(a[1]==1&&a[2]==2&&a[3]==2){
								cout<<5<<" "<<2;
							}
							else if(a[1]==2&&a[2]==1&&a[3]==1){
								cout<<5<<" "<<4;
							}
							else if(a[1]==2&&a[2]==1&&a[3]==2){
								cout<<5<<" "<<2;
							}
							else if(a[1]==2&&a[2]==2&&a[3]==1){
								cout<<5<<" "<<4;
							}
							else if(a[1]==2&&a[2]==2&&a[3]==2){
								cout<<5<<" "<<1;
							}
						}
					}
				}
				return 0;
			}
			int b=a[n];
			if(a[n-1]!=b){
				cout<<n-1<<" "<<n;
				return 0;
			}
			if(a[n-1]==b){
				cout<<0<<" "<<n;
				return 0;
			}
		}
	}
	return 0;
}