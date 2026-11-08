#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=2e5;
struct st{
	ll l,r,s;
	char val;
};
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
	vector<st> a(N+5);
	int n;
	cin>>n;
	ll sum=0;
	for(int i=1;i<=n;i++){
		ll o;
		char k;
		cin>>o>>k;
		sum++;
		a[i].l=sum;
		a[i].s=o;
		sum+=o-1;
		a[i].r=sum;
		a[i].val=k;
	}
	ll j=1e10;
	for(int i=1;i<=n;i++){
		if(a[i].l<=(sum+1)/2&&a[i].r>(sum+1)/2){
			j=i;
			break;
		}
	}
//	cout<<"-------"<<j<<endl;
	if(j!=1e10){
		vector<st> b=a;
		st u,w;
		u.l=b[j].l;
		w.l=(sum+1)/2+1;
		u.r=(sum+1)/2;
		w.r=b[j].r;
		u.val=b[j].val;
		w.val=b[j].val;
		b.erase(b.begin()+j);
		b.insert(b.begin()+j,w);
		b.insert(b.begin()+j,u);
//		for(int i=1;i<=n+1;i++){
//			cout<<b[i].l<<" "<<b[i].r<<" "<<b[i].val<<endl;
//		}
//		cout<<"-----"<<sum<<endl;
		ll ans=0,kk=LLONG_MAX;
		ll qi=1,ei=n+1,now=1;
		bool c=false;
		while(now<=sum/2){
			ll lk=b[qi].l,rk=b[qi].r;
			ll lkk=sum+1-lk,rkk=sum+1-rk;
//			cout<<'-'<<lk<<" "<<rk<<" "<<lkk<<" "<<rkk<<endl;
			if(!c){
				while(true){
					if(b[ei].r<=lkk)break;
					ei--;
				}
			}//cout<<"--"<<ei<<endl;
			if(b[qi].val!=b[ei].val){
				ll qlen=b[qi].s,elen=b[ei].s;
			//	cout<<"---"<<qlen<<" "<<elen<<endl;
				if(qlen>elen){
//					cout<<"-t-----"<<ans<<" "<<now<<" "<<ei<<endl;
					ans+=elen;
					now=sum+2-b[ei].l;\
					b[qi].s-=elen;
					ei--;
					c=false;
//					cout<<"----"<<ans<<" "<<ei<<" "<<now<<" "<<endl;
				}else if(qlen<elen){
//					cout<<"-j-----"<<ans<<" "<<now<<" "<<qi<<endl;
					ans+=qlen;
					b[ei].s-=qlen;
					now=b[qi].r+1;
					qi++;
					c=true;
//					cout<<"----"<<ans<<" "<<qi<<" "<<now<<" "<<endl;
				}else{
//					cout<<"-k-----"<<ans<<" "<<now<<" "<<ei<<" "<<qi<<endl;
					ans+=qlen;
					now=b[qi].r+1;
					qi++;
					ei--;
					c=false;
//					cout<<"----"<<ans<<" "<<ei<<" "<<qi<<" "<<now<<" "<<endl;
				}
			}else{
				now=b[qi].r+1;
				qi++;
				ei--;
//				cout<<"-----------"<<now<<" "<<qi<<" "<<ei<<endl; 
			}
		}kk=min(kk,ans);
		cout<<ans;
	}else{
	//	for(int i=1;i<=n;i++){
	//		cout<<a[i].l<<" "<<a[i].r<<" "<<a[i].val<<endl;
	//	}
	//	cout<<"-----"<<sum<<endl;
		ll ans=0;
		ll qi=1,ei=n,now=1;
		bool c=false;
		while(now<=sum/2){
			ll lk=a[qi].l,rk=a[qi].r;
			ll lkk=sum+1-lk,rkk=sum+1-rk;
	//		cout<<'-'<<lk<<" "<<rk<<" "<<lkk<<" "<<rkk<<endl;
			if(!c){
				while(true){
					if(a[ei].r<=lkk)break;
					ei--;
				}
			}//cout<<"--"<<ei<<endl;
			if(a[qi].val!=a[ei].val){
				ll qlen=a[qi].r-a[qi].l+1,elen=a[ei].r-a[ei].l+1;
			//	cout<<"---"<<qlen<<" "<<elen<<endl;
				if(qlen>elen){
//					cout<<"------"<<ans<<" "<<now<<" "<<ei<<endl;
					ans+=elen;
					now=sum+2-a[ei].l;
					ei--;
					c=false;
			//		cout<<"----"<<ans<<" "<<ei<<" "<<now<<" "<<endl;
				}else if(qlen<elen){
//					cout<<"------"<<ans<<" "<<now<<" "<<qi<<endl;
					ans+=qlen;
					now=a[qi].r+1;
					qi++;
					c=true;
			//		cout<<"----"<<ans<<" "<<qi<<" "<<now<<" "<<endl;
				}else{
//					cout<<"------"<<ans<<" "<<now<<" "<<ei<<" "<<qi<<endl;
					ans+=qlen;
					now=a[qi].r+1;
					qi++;
					ei--;
					c=false;
			//		cout<<"----"<<ans<<" "<<ei<<" "<<qi<<" "<<now<<" "<<endl;
				}
			}else{
				now=a[qi].r+1;
				qi++;
				ei--;
			}
		}cout<<ans;
	}
	return 0;
}
/*
3
2 a
2 b
1 c
10
3 a
2 b
5 d
6 a
2 d
7 y
2 b
2 j
8 k
9 c
*/
