#include<bits/stdc++.h>
using namespace std;
long long q,a,s,u[10000000];
map<int,int>qw;
int main(){
freopen("and.in","r",stdin);
freopen("and.out","w",stdout);
	scanf("%lld%lld",&q,&a);
	if(a==1){
		for(int i=1;i<=q;i++)cin>>u[i],s=max(s,u[i]);
		cout<<s;
	}else if(a==2){
		for(int i=1;i<=q;i++)cin>>u[i];
		for(int i=1;i<=q;i++){
			for(int j=i+1;j<=q;j++){
				s=max(u[i]&u[j],s);
			}
		}
		cout<<s;
	}else{
		for(int i=1;i<=q;i++)cin>>u[i],qw[u[i]]++;
		if(qw.size()<=4){
			if(qw[3]>1){
				cout<<3;
				if(qw[2]==1){
					cout<<(3&2);	
				}else if(qw[1]==1)cout<<(3&1);
				else cout<<0;
			}else if(qw[3]==1&&qw[2]>=1||qw[2]>1)cout<<2;
			else if(qw[3]==1&&qw[1]>=1||qw[1]>1)cout<<1;
				else cout<<0;
		}else{
			for(int i=1;i<=q;i++)cin>>u[i];
			for(int i=1;i<=q;i++){
				for(int j=i+1;j<=q;j++){
					s=max(u[i]&u[j],s);
				}
			}
			cout<<s;
		}
	}
	return 0;
}