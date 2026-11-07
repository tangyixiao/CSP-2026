#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
const int M=3e5+10;
long long n,m,a[N],b[N],vis[M],ans[M];
void pe(){
	for(int i=1;i<=m;i++) vis[i]=-1;
	for(int i=1;i<=n;i++) b[i]=-1;
	return ;
}
void test(int l,int r){
	for(int j=l;j<=r;j++){
		cout<<b[j]<<' ';
	}
	return ;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	long long cnt=0,dcnt=0;
	for(int i=1;i<=n;i++){
		pe();
		for(int j=i;j<=n;j++){
			dcnt=0;
			if(vis[a[j]]!=-1){
				for(int k=vis[a[j]]+1;k<=j;k++){
					vis[b[k]]=-1;
					b[k]=-1;
					dcnt++;
				}
				cnt-=dcnt;
			}else{
				cnt++;
				b[j]=a[j];
				vis[b[j]]=j;
			}
//			for(int j=1;j<=m;j++){
//				printf("%d :%d\n",j,vis[j]); 
//			}
//			test(i,j);
//			cout<<"\n";
//			cout<<"a[j]: "<<a[j]<<"visj: "<<vis[a[j]]<<"j: "<<j<<"cnt: "<<cnt<<"dcnt: "<<dcnt<<"\n";
		}
		for(int j=1;j<=m;j++){
			if(vis[j]!=-1){
				ans[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}