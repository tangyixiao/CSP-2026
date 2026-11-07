#include<bits/stdc++.h>
using namespace std;
const int MAXN=5e5+5,MAXNN=3e5+5;
int a[MAXN],ans[MAXNN]={0},s[MAXN],b[MAXNN]={0},bl[MAXNN]={0};
stack<int> st;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	bool bb=false;
	cin>>n>>m;
	a[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1])bb=true;
		bl[a[i]]=i;
	}
	if(bb==false){
		for(int i=1;i<=m;i++)cout<<bl[i]<<" ";
		return 0;
	}
	for(int i=1;i<=n;i++){
		int t=1;
		memset(b,0,sizeof(b));
		for(int j=i;j<=n;j++){
			if(b[a[j]]>0){
				t=b[a[j]]+1;
			}
			else{
				b[a[j]]=t;
				s[t]=a[j];
				t++;
			}
		}
		memset(b,0,sizeof(b));
		for(int j=1;j<t;j++){
			b[s[j]]=1;
		}
		for(int j=1;j<=m;j++)ans[j]+=b[j];
	}
	for(int i=1;i<=m;i++)printf("%d ",ans[i]);
	return 0;
}
