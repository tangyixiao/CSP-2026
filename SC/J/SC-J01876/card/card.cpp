#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;

int n,m;
int a[N];
int b[N];
int ans[N];

int find(int x,int len_b,int st){
	for(int i=st;i<len_b;i++){
		if(b[i]==x)return i;
	}
	return 0;
}

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(b,0,sizeof(b));
		//cout<<endl;
		for(int j=i;j<=n;j++){
			b[j]=a[j];
			//cout<<b[j]<<' ';
			int x=find(b[j],j,i);
			if(x!=0){
				//cout<<"!!!"<<x<<b[j]<<endl;
				for(int y=x;y<j;y++){
					b[y]=0;
				}
			}
		}
		//cout<<endl;
		for(int j=i;j<=n;j++){
			if(b[j]!=0)ans[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
}






