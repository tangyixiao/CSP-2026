#include<bits/stdc++.h>
using namespace std;
//n:500005,m:300005
int n,m,a[500005],t[500005],ans[500005];
map<int,int>mp;
//dianshu,idx
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	for(int i=1;i<=n;i++){
		mp.clear();
		int l=0;
		for(int j=1;j<=i;j++){
			int d=a[j];
			if(mp[d]==0){
				t[++l]=a[j];
				mp[d]=l;
			}else {
				int c=mp[d];
				for(int k=c;k<=l;k++){
					mp[t[i]]=0;
				}l=c;
				mp[a[j]]=l;
			}
		}for(int j=1;j<=l;j++)ans[t[i]]++;
	}for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
