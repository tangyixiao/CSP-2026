#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1000];
int st[1000];
int t;
int ans[1000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int s=1;s<=n;s++){
		for(int i=s;i<=n+s-1;i++){
			st[++t]=a[(i%n)==0?n:i%n];
			for(int j=1;j<t;j++){
				if(st[j]==a[(i%n)==0?n:i%n]){
					t=j-1;
				}
			}
		}
		for(int j=1;j<=t;j++){
			ans[st[j]]++;
		}		
		t=0;	
	}
	for(int i=1;i<=m;i++){
		cout<<n<<" ";
	}
	return 0;
}
