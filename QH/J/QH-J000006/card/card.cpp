#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=3e5+10;
int a[N];
int c[N];
int lst[N];
int mp[N];
bool flag[N];
void solve(int s){
	memset(c,0,sizeof(c));
	memset(lst,0,sizeof(lst));
	memset(flag,0,sizeof(flag));
	for(int i=s;i<=n;i++){
		if(lst[a[i]]!=0){
			for(int j=lst[a[i]];j<i;j++){
				c[j]=1;
				lst[a[j]]=0;
			}
		}
		lst[a[i]]=i;
		
	}
	for(int i=s;i<=n;i++){
		if(c[i]==0&&flag[a[i]]==0){
			flag[a[i]]=1;
			mp[a[i]]+=1;
		}
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		solve(i);
	}
	for(int i=1;i<=m;i++){
		cout<<mp[i]<<' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
