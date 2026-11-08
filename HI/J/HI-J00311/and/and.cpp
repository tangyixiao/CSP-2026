#include <bits/stdc++.h>
using namespace std;
int r[100100];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a,b;cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>r[i];
	}
	int t=0;
	sort(r+1,r+a+1);
	for(int j=a;j>a-b;j--){
		t=t+(r[j]&r[j-1]);
		j--;
	}
	cout<<t;
	return 0; 
}
