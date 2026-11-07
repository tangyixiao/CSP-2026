#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 200005
ll n,m,ls[N],p[N],c,cnt[N],C;
bool flg=1,lt[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>ls[i];
		if(ls[i]<ls[i-1]){
			flg=0;
		}
		if(ls[i]!=ls[i-1] && i!=1){
			C++;
		}
	}
	if(flg==1){
		c=1;
		for(ll i=2;i<=n;i++){
			if(ls[i]!=ls[i-1]){
				cout<<c<<' ';
			}
			c++;
		} 
		cout<<c<<"\n";
		return 0;
	}
	if(n<=500){
		for(ll st=1;st<=n;st++){
			for(ll i=1;i<=m;i++){
				p[i]=-1;
			}
			for(ll i=st;i<=n;i++){
				if(p[ls[i]]!=-1){
					for(ll j=1;j<=m;j++){
						if(p[j]>p[ls[i]]){
							p[j]=-1;
						}
					}
					c=p[ls[i]];
				}else{
					c++;
					p[ls[i]]=c;
				}
			}
			for(ll i=1;i<=m;i++){
				if(p[i]!=-1){
					cnt[i]++;
				}
			}
		}
		for(ll i=1;i<=m;i++){
			cout<<cnt[i]<<' ';
		}
		cout<<"\n"<<endl;
		return 0; 
	}
	else{
		for(ll i=1;i<=m;i++){
			lt[i]=-1;
		}
		for(ll i=1;i<=n;i++){
			lt[ls[i]]=i;
		}
		for(ll st=1;st<=n;st++){
			for(ll i=st;i<=n;i++){
				cnt[ls[i]]++;
				if(lt[ls[i]]!=-1 && i<lt[ls[i]]){
					i=lt[ls[i]];
				}
			}
		}
		for(ll i=1;i<=m;i++){
			cout<<cnt[i]<<' ';
		}
		cout<<"\n"<<endl;
		return 0; 
	}
	return 0;
}
/*
15 5
1 1 1 1 2 2 3 3 3 4 4 4 4 4 5

		c=1;
		for(ll i=2;i<=n;i++){
			if(ls[i]!=ls[i-1]){
				cnt[ls[i-1]]+=c;
			}
			c++;
		} 
		for(ll i=1;i<=m;i++){
			cout<<cnt[i]<<' ';
		}
		cout<<"\n"<<endl;
		return 0;
*/
