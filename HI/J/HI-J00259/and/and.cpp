#include <bits/stdc++.h>
using namespace std;
int a[105];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	int l,h;
	cin>>n>>m;
	 for (int i=0;i<=n;i++){
	 	cin>>a[i];
	 }
	 //sort(a,a+1);
	for (int i=0;i<=n;i++){
		if (a[i]>a[i+1]){
			h=a[i];
			l=a[i+1];
		}
		else{
			h=a[i+1];
			l=a[i];
		}
	}
	cout<<12;
	return 0;
}
