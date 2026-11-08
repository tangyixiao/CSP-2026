#include <bits/stdc++.h>
using namespace std;
long long m,cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a[n+5]={0};
	string c[n+5];
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		m+=a[i];
	}
	for(int i=1;i<=n;i++){
		int j=n;
		while(a[i]>0){
		if(a[j]==0){
			j--;
		}
		if(c[i]!=c[j]){
			cnt++;
			
		}
		a[i]--;
		a[j]--;}
		
	}
	cout<<cnt;
	return 0;
}
