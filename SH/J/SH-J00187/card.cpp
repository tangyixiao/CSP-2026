#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n;
	vector<int> v;
	cin>>n;
	int m;
	cin>>m;
	int a[50005]={0};
	int ans[30005]={0};
	v[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){//¾Ö 
		for(int j=i;j<=n;j++){
			int x=0;
			for(int w=1;w<=v.size();w++){
				if(v[w]==a[j]){
					x=w;
				}
			}
			if(x==0){
				int k=v.size();//
				v[k+1]=a[j];
			}
			else{
				for(int w=x+1;w<=v.size();w++){
					v[w]=0;
				}
			}
		}
		int k[50005]={0};
		for(int j=1;j<=v.size();j++){
			if(v[j]!=0)	k[v[j]]=1;
		}
		for(int kk=1;kk<=m;kk++){
			ans[kk]+=k[kk];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
