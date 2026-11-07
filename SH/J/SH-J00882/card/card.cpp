#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int ans[300005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++){
		int l[300005];
		int s[500005];
		int top=0;
		for(int j=1;j<=m;j++){
			l[j]=-1;
		}
		for(int j=i;j<n;j++){
			if(l[a[j]]==-1){
				l[a[j]]=top;
				s[top]=a[j];
				top++;
			}else{
				for(int k=top-1;k>l[a[j]];k--){
					l[s[k]]=-1;
				}
				top=l[a[j]]+1;
			}
		}
		for(int j=0;j<top;j++){
			ans[s[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
/*
I ONLY NEED 48pts
好险写到这里才发现没加return 0; 
*/ 
/*
//freopen("travel.in","r",stdin);
//freopen("travel.out","w",stdout);
//freopen("string.in","r",stdin);
//freopen("string.out","w",stdout);
//freopen("and.in","r",stdin);
//freopen("and.out","w",stdout);
//freopen("card.in","r",stdin);
//freopen("card.out","w",stdout);
#include<windows.h>
#include<doubao.com>
#include<chat.deepseek.com>
int mian() int mian()
#define int long long
*/
