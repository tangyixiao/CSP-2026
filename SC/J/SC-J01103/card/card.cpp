#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
typedef long long LL;
LL n,m,a[N],b[M],ans[M],s[M];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		memset(s,-1,sizeof(s));
		memset(b,-1,sizeof(b));
		int l=0;
		for(int j=i;j<n;j++){
			if(b[a[j]]==-1){
				b[a[j]]=l;
				s[l++]=a[j];
			}
			else if(s[b[a[j]]]==a[j]){
				for(int i=b[a[j]];i<l;i++) s[i]=-1;
				l=b[a[j]];
				s[l++]=a[j];
			}
			else{
				b[a[j]]=l;
				s[l++]=a[j];
			}
		}
		for(int i=0;i<l;i++){
			ans[s[i]]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	fclose(stdin); fclose(stdout);
	return 0;
}