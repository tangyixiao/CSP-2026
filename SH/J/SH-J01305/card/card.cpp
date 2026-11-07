#include<bits/stdc++.h>
using namespace std;
const int maxn=5e5+5;
int n,m,a[maxn];
int cnt,x[maxn],y[maxn],b[maxn];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	for(int i=1;i<=n;++i){
		cnt=0;
		memset(y,0,sizeof(y));
		for(int j=i;j<=n;++j){
			if(y[a[j]]==0){
				++cnt;
				y[a[j]]=cnt;
				x[cnt]=a[j];
				//if(i==1||i==5) cout<<"put:"<<a[j]<<"=>"<<cnt<<","<<y[a[j]]<<endl;
			}else{
				int xx=y[a[j]];
				//cout<<"shangyige zai"<<xx<<endl;
				for(int k=x[y[a[j]]]+1;k<=cnt;++k){
					y[x[k]]=0;
				//	if(i==1||i==5) cout<<"kick:"<<a[k]<<"=>"<<k<<endl;
				}
				cnt=xx;
				y[a[j]]=xx;
				x[cnt]=a[j];
			//	if(i==1||i==5) cout<<"put:"<<a[j]<<"=>"<<cnt<<endl;
			}
		}
		for(int j=1;j<=cnt;++j){
			++b[x[j]];
		}
	//	cout<<"//"<<endl;
	}
	for(int i=1;i<=m;++i){
		cout<<b[i]<<" ";
	}
	return 0;
}
