#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,i;
	cin>>n;
	long long a[n+100];
	char c[n+100];
	for(i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	int x=0,y=n-1;
	long long ans=0;
	while(y>x){
		if(c[x]!=c[y]) ans+=min(a[x],a[y]);
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
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
