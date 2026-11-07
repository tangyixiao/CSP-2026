#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a[n+1];
	string b[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	long long x=1,y=n,num=0;
	while(x<y){
		if(b[x]==b[y]){
			if(a[x]>a[y]){
				a[x]-=a[y];
				y--;
			}
			else if(a[x]<a[y]){
				a[y]-=a[x];
				x++;
			}
			else{
				x++;
				y--;
			}
		}
		else{
			if(a[x]>a[y]){
				num+=a[y];
				a[x]-=a[y];
				y--;
			}
			else if(a[x]<a[y]){
				num+=a[x];
				a[y]-=a[x];
				x++;
			}
			else{
				num+=a[x];
				x++;
				y--;
			}
		}
	}
	cout<<num;
	return 0;
}