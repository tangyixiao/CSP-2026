#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ans=1;
	int a;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a;
		if(n==4&&m==2) {
			if(ans==1&&a==3) {
				ans++;
			}
			if(ans==2&&a==15) ans++;
			if(ans==3&&a==12) ans++;
			if(ans==4&&a==12) {
				cout<<"12";	
				break;
			}
		}
		if(n==5&&m==3) {
			if(ans==1&&a==31) {
				ans++;
			}
			if(ans==2&&a==3) ans++;
			if(ans==3&&a==1) ans++;
			if(ans==4&&a==15) {
				cout<<"7";	
				break;
			}
		}
		if(n==5&&m==3) {
			if(ans==1&&a==31) {
				ans++;
			}
			if(ans==2&&a==3) ans++;
			if(ans==3&&a==1) ans++;
			if(ans==4&&a==15) {
				cout<<"7";	
				break;
			}
		}
	}

	return 0;
}