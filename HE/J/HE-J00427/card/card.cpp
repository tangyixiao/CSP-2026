#include<bits/stdc++.h>
using namespace std;
int n,ans,e,v;
int a[11000];
char c[11000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i]>>c[j];
			while(i--){
				v++;
				e=c[v];
				if(e!=c[j]){
					ans++;
				}
			}
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
