#include<bits/stdc++.h>
#define ll long long
#define fori(a,b) for(int i=a;i<=b;i++)
#define forj(a,b) for(int j=a;j<=b;j++)
using namespace std;
int n,m,a[200010],ans,id[200010],q[200010],t[200010];
signed main(){
	ios::sync_with_stdio(0),cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	fori(1,n){
		cin>>a[i];
	}
	forj(1,n){
		int l=0;
		memset(id,0,sizeof(id));
		fori(j,n){
//			cout<<i<<' ';
			if(id[a[i]]==0){
				q[++l]=a[i];
				id[a[i]]=l;
			}else{
//				cout<<" !"<<l<<' ';
				for(l=l;l>id[a[i]];l--){
					if(id[q[l]]==l) id[q[l]]=0;
				}
				l=id[a[i]];
//				cout<<l<<"! ";
			}
		}
//		cout<<endl;
//		fori(1,m){
//			cout<<id[i]<<' ';
//		}
//		cout<<endl;
		fori(1,l){
			t[q[i]]++;
//			cout<<q[i]<<' ';
		}
//		cout<<endl<<endl;
	}
	fori(1,m){
		cout<<t[i]<<' ';
	}
	return 0;
}

