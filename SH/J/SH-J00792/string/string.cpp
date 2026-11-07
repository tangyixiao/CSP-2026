#include<bits/stdc++.h>
using namespace std;
long long a[200000+9];char b[200000+9],c[2000009],d[2000009];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);	
	cin.tie(0)->sync_with_stdio(0);
	int n,k;long long cnt=0,ans=0,x=0,y=0;
	cin>>n; 
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		for(int j=1;j<=a[i];j++){
			c[++cnt]=b[i];
		} 
	}
	for(int i=cnt;i>=1;i--){
		d[++ans]=c[i];
	}
	if(cnt%2==0){
		for(int i=cnt/2;i<=n;i++){
			if(c[i]!=d[i]){
				y++;
			}
		}
		for(int i=1;i<=cnt/2;i++){
			if(c[i]!=d[i]){
				x++;
			}
		}
		cout<<min(x,y);
	}
	else{
		for(int i=(cnt+1)/2+1;i<=n;i++){
			if(c[i]!=d[i]){
				y++;
			}
		}
		for(int i=1;i<=(cnt+1)/2;i++){
			if(c[i]!=d[i]){
				x++;
			}
		}
		cout<<min(x,y);
	}
	return 0;
}
