#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[200005];
	int n,sum=0;
	string c[200005];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	if(n==1) cout<<0;
	if(n==2) 
		if(c[0]==c[1]) cout<< 0;
		else{
			if(sum%2==1) {
				if(a[0]<a[1]) cout<<a[1]-1;
				else cout<<a[0]-1;
			}
			else{
				if(a[0]<a[1]) cout<<a[1];
				else cout<<a[0];
			}
		}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
