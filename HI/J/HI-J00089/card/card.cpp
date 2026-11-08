#include<bits/stdc++.h>
using namespace std;
int a[500005];
int b[300005];
int c[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,cnt=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			c[i]=a[i];
			cnt++;
			for(int p=1;p<=n-cnt;p++){
				a[i]=a[i+1];
			}
			for(int q=1;q<=cnt;q++){
				if(c[j]==a[i]){
					for(int x=j;x<=cnt;x++){
		                c[y]=0;
					}
					c[j]=a[i];
				}
				a[]
			}
			for(int y=1;y<=cnt;y++){
				b[c[y]]++;
			}
	    }
	    cnt=0;
	} 
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
