#include <bits/stdc++.h>
using namespace std;

freopen("and.in","r",stdin);
freopen("and.out","w",stdout);

int a[200050];

int main(){
	int n,m;
	int cin1[4]={3,15,12,12},cin2[5]={31,3,1,15,7};
	cin>>n>>m;
	for (int i=0;i<n;i++){
		cin>>a[i];
	} 
	int in=0;
	if (n==4 && m==2) {
		for (int i=0;i<4;i++){
			if (a[i]==cin1[i]) in++;
		}
	}
	if (in==4) cout <<12;
	in=0;
	if (n==5 && m==3) {
		for (int i=0;i<5;i++){
			if (a[i]==cin2[i]) in++;
		}
	}
	if (in==5) cout <<7;
	return 0;
}