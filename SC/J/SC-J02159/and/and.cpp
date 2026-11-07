#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define up(i,a,b) for(int i=(a);i<=(int)(b);i++)
#define VI vector<int>
using namespace std;
const int NN=1e5+5;
ll pw[32],anss,pw30=1;
ll a[NN],n,m,maxa;
void dfs(int pos,int num,ll ans){
//	cout<<pos<<" "<<num<<" "<<ans<<endl;
	if(num==m){
		anss=max(ans,anss);
		return;
	}
	if(pos>n) return;
	dfs(pos+1,num+1,ans&a[pos]);
	dfs(pos+1,num,ans);
}
bool cmp(ll x,ll y){return x>y;}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	up(i,1,n) cin>>a[i],maxa=max(maxa,a[i]);
	pw[0]=1;
	up(i,1,30) pw[i]=pw[i-1]*2,pw30+=pw[i];
	if(m==1){
		up(i,1,n){
			anss=max(anss,a[i]);
		}
		return cout<<anss,0;
	}
	if(m==2){
		up(i,1,n){
			up(j,i+1,n){
				anss=max(anss,a[j]&a[i]);
			}
		}
		return cout<<anss,0;
	}
	if(m==n){
		anss=pw30;
		up(i,1,n){
			anss&=pw[i];
		}
		return cout<<anss,0;
	}
	if(m==n-1){
		int kik=-1;
		for(int i=30;i>=0;i--){
			int num=0;
			up(j,1,n){
				if(!(a[j]&pw[i])) num++;
			}
			if(num==0) anss+=pw[i];
			if(num==1){
				int kk;
				up(j,1,n){
					if(!(a[j]&pw[i])){
						kk=j;
						break;	
					}
				}
				if(kik==-1){
					kik=kk;
					anss+=pw[i];
				}else if(kik==kk) anss+=pw[i];
			}
		}
		return cout<<anss,0;
	}
	if(maxa<4){
		int a3=0,a2=0,a1=0;
		up(i,1,n){
			if(a[i]==1) a1++;
			else if(a[i]==2) a2++;
			else a3++;
		}
		if(m<=a3) return cout<<3,0;
		if(m<=a2+a3) return cout<<2,0;
		return cout<<1,0;
	}
	int f=1;
	up(i,0,n){
		bool f1=0;
		up(j,1,30){
			if(a[i]==pw[j]-1) f1=1;
		}
		if(!f1){
			f=0;
			break;
		}
	}
	if(f){
		sort(a+1,a+1+n,cmp);
		anss=pw30;
		up(i,1,m) anss&=a[i];
		return cout<<anss,0;
	}
	f=0;
	up(i,0,30) if(n==pw[i]) f=1;
	up(i,1,n) if(a[i]!=i-1) f=0; 
	if(f){
		anss=pw30;
		for(int i=0;i<m;i++) anss&=a[n-i];
		return cout<<anss,0;
	}
	dfs(1,0,pw30);
	return cout<<anss,0;
}
/*
8 3
0 1 2 3 4 5 6 7
*/