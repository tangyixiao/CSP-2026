#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],b[300005],s[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i)cin>>a[i];
	for(int c=1;c<=n;++c){
		memset(b,0,sizeof(b));
		for(int i=c;i<=n;++i){
			if(b[a[i]]==0){
				b[a[i]]=i;
			}
			else{
				for(int j=b[a[i]];j<=i;++j){
					b[a[j]]=0;
				}
				b[a[i]]=i;
			}
		}
		for(int i=1;i<=n;++i){
			if(b[i]!=0)s[i]++;
		}
	}
	for(int i=1;i<=m;++i)cout<<s[i]<<" ";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
