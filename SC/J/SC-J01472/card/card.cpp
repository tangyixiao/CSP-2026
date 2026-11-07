#include<bits/stdc++.h>
using namespace std;
int n,a[500010],m,t[300010],s[3000010],c[3000010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s[a[i]]=i;
	}
	for(int i=n;i>=1;i--){
		c[a[i]]++;
	}
	for(int i=1;i<=n;i++){
		int x=i;
		while(x<=n){
			if(c[a[x]]!=1){
				t[a[x]]++;
				//cout<<a[x]<<' ';
				x=s[a[x]]+1;
			}
			else{
				t[a[x]]++;
				//cout<<a[x]<<' ';
				x++;
			}
		}
		c[a[i]]--;
		//cout<<'\n';
	}
	for(int i=1;i<=m;i++){
		cout<<t[i]<<' ';
	}
}