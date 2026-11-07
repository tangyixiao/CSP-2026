#include<bits/stdc++.h>
using namespace std;
int a[500005],b[300005],w[300005],ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	for(int i=1;i<=n;++i){
		for(int j=i;j<=n;++j){
			if(b[a[j]]==0){
				++b[a[j]];
				w[a[j]]=j;
			}
			else{
				b[a[j]]++;
				for(int k=w[a[j]];k<j;++k){
					if(b[a[k]]!=0)
						--b[a[k]];
				}
				w[a[j]]=j;
			}
		}
		for(int j=1;j<=m;++j){
			if(b[j]!=0){
				++ans[j];
				b[j]=0;
			}
		}
	}
	for(int i=1;i<=m;++i){
		cout<<ans[i]<<" ";
	}
	return 0;
} //祈求CCF的施舍QAQ，球球了，给一点吧チへきけふフきいあへチミるに）（猴子玩键盘） 