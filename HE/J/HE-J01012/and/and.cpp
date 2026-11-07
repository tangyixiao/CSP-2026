#include<bits/stdc++.h>
#define ll long long
#define fori(a,b) for(int i=a;i<=b;i++)
#define forj(a,b) for(int j=a;j<=b;j++)
using namespace std;
int ans=2147483647,n,a[200010],m,t[33],b[33];
void fix(int &x,int id){
	memset(b,0,sizeof(b));
	int l=0;
	while(x){
		b[++l]=x&1;
		x>>=1;
	}
	int base=1;
	fori(1,id){
		x+=b[i]*base;
		base<<=1;
	}
}
void add(int x){
	memset(b,0,sizeof(b));
	int l=0;
	while(x){
		b[++l]=x&1;
		x>>=1;
	}
	fori(1,l){
		t[i]+=b[i];
	}
}
bool cmp(int x,int y){
	return x>y;
}
signed main(){
	ios::sync_with_stdio(0),cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	fori(1,n){
		cin>>a[i];
		add(a[i]);
	}
	for(int i=32;i>=1;i--){
//		cout<<t[i]<<' ';
		if(t[i]>=m){
			forj(1,n){
				if(a[j]>(1<<i)-1){
					fix(a[j],i);
				}
			}
			break;
		}
	}
//	cout<<endl;
	sort(a+1,a+n+1,cmp);
	fori(1,m){
//		cout<<a[i]<<' ';
		ans&=a[i];
	}
	cout<<ans;
	return 0;
}
