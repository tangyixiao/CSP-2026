#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=5e5+50;
int n,m;
int a[N];
int pos[N];
int sta[N];
int id[N];
int ans[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool flag=true;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) flag=false;
		pos[a[i]]=i;
	}
	for(int i=1;i<=m;i++){
		cout<<pos[i]<<" ";
	}
//	else{
//		for(int i=1;i<=n;i++){
//			int len=0;
//			memset(id,0,sizeof(id));
//			for(int j=i;j<=n;j++){
//				if(id[a[i]]){
//					len=id[a[i]];
//				}else{
//					sta[++len]=a[i];
//					id[a[i]]=len;
//				}
//			}
//			for(int j=1;j<=len;j++){
//				ans[sta[j]]++;
//			}
//		}
//		for(int i=1;i<=m;i++){
//			cout<<ans[i]<<" ";
//		}
//	}
//	
	
	return 0;
}
