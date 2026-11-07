#include <bits/stdc++.h>
using namespace std;
int n,m;
int main(){
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int j=1;j<=m;j++){
		int c=0,a[5000]={0},s[300010]={0};
		int i,d=0;
		for(;i<=n;i++){
			int x;
			cin>>x;
			if(s[x]){
				for(;c>=1;c--){
					if(a[c]!=x) a[c]=0;
					else break;
				}
			}else{
				a[c]=x;
				s[x]++;
			}
			c++;
		}
		while(a[i]){
			if(a[i]==j) d++;
			i++;
		}
		cout<<d<<" ";
	}
	return 0;
}
