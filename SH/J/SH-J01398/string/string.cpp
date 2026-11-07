#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct node{
	ll x;
	char c;
};
node a[200010];
int l_move(int l,int cnt){
	while(l<cnt){
		if(a[l].x<=0){
			l++;
			a[l].x+=a[l-1].x;
		}else{
			break;
		}
	}
	return l;
}
int r_move(int r){
	while(r>1){
		if(a[r].x<=0){
			r--;
			a[r].x+=a[r+1].x;
		}else{
			break;
		}
	}
	return r;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	a[0].x=0;
	a[0].c='-';
	int n,cnt=0;
	ll ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cnt++;
		ll x;
		char c;
		cin>>x>>c;
		if(c==a[cnt-1].c){
			a[cnt-1].x+=x;
			cnt--;
			//cout<<"---"<<endl;//----------------------------
		}else{
			a[cnt].x=x;
			a[cnt].c=c;
		}
	}
	int l=1;int r=cnt;
	while(l<=r){
		if(a[l].c==a[r].c){
			if(a[l].x==a[r].x){
				l++;r--;
			}else{
				if(a[l].x<a[r].x){
					//ans+=a[r].x-a[l].x;
					a[r].x-=a[l].x;
					l++;
				}else{
					//ans+=a[l].x-a[r].x;
					a[l].x-=a[r].x;
					r--;
				}
			}
		}else{
			if(a[l].x==a[r].x){
				ans+=a[l].x;
				l++;r--;
			}else{
				if(a[l].x<a[r].x){
					ans+=a[l].x;
					a[r].x-=a[l].x;
					l++;
				}else{
					ans+=a[r].x;
					a[l].x-=a[r].x;
					r--;
				}
			}
		}
		//cout<<ans<<endl;//-------------------------------------
	}
	cout<<ans;
	return 0;
}
