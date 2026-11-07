#include<bits/stdc++.h>
using namespace std;
int n,m,ans[300005],a[500005],w,w1;
map<int,int>q,q1;map<int,int>an;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int j=1;j<=n;j++){
		for(int i=j;i<=n;i++){
			if(q.find(a[i])==q.end()){
				q[w]=a[i];w++;
				an[a[i]]++;
			}
			if(q.find(a[i])!=q.end()||an[a[i]]==2){
				if(an[a[i]]==2)
				an[a[i]]--;
				int c=0;
				for(int k=0;k<w;k++){
					if(q[k]==a[i]||c==1){
						c=1;
					}
					else if(c==0){
						q1[w1]=q[k];w1++;
					}
				}
				q.clear();w=0;
				for(int k=0;k<w1;k++){
					if(q1[k]!=0){
						q[w]=q1[k];w++;
					}
				}q[w]=a[i];w++;an.clear();q1.clear();w1=0;
				for(int k=0;k<w;k++){
					an[q[k]]++;
				}
			}
//			for(int i=1;i<=m;i++){
//				cout<<an[i]<<' ';
//			}
//			cout<<'\n';
		}
		for(int i=1;i<=m;i++){
			ans[i]+=an[i];
		}
		an.clear();q.clear();w=0;
	}
	for(int i=1;i<=m;i++)
	cout<<ans[i]<<' ';
	return 0;
}
