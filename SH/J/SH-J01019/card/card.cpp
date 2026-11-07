#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int n,m;
int a[N];
long long ans[N];
int s[N];
bool vis[N]={0};
int main(){
	freopen("card1.in","r",stdin);
	freopen("card.ans","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int l=0;
		for(int j=i;j<=n;j++){
			
			if(vis[a[j]]!=0){
				while(s[l-1]!=a[j]){
					l-=1;
					vis[s[l]]=0;
					s[l]=0;
				}
				vis[a[j]]=l;
				l+=1;
			}
			else {
				s[l]=a[j];
				vis[a[j]]=l;
				l+=1;
			}
		}
		for(int i=l;i>=1;i--){
			cout<<s[i];
			ans[s[i]]+=1;
			s[i]=0;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
	
}
