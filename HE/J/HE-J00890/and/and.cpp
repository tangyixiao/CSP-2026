#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector
ll n,m;
		ll maxx=0;
vec<ll>a;
bool flagb=1;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	
	cin>>n>>m;
	a.resize(n+1);
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		maxx=max(maxx,a[i]);
		if(a[i]!=i-1)flagb=0;
	}
	if(maxx<4){
		ll cnt[5]={};
		for(ll i=1;i<=n;i++)cnt[a[i]]++;
		ll ans=0;bool flag=0;
		for(ll i=3;i>=0;i++){
			if(m<=0){
				cout<<ans;
				return 0;
			}
			if(flag){
				ans&=i;
				m-=cnt[i];
			}else{
				if(cnt[i]){
					flag=1;
					ans=i;
					m-=cnt[i];
				}
			}
		}
	}
	if(flagb){
		ll cnt=0,n2=n;
		while(n2){
			n2/=2;
			cnt++;
		}ll cnt2=0,ans=maxx;
		for(ll i=cnt;i>=0;i--){
			for(ll j=1;j<=n;i++){
				if(cnt2==m)break;
				if(a[j]&(1<<i)  ==  maxx&(1<<i)){
					cnt2++;
					ans&=a[j];
				}
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==1){
		cout<<maxx;
		return 0;
	}
	if(m==n){
		ll ans=a[1];
		for(ll i=2;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==n-1){
		ll maxans=0;
		for(ll i=1;i<=n;i++){
			ll mand=a[i==1?2:1];
			for(ll j=2;j<=n;j++){
				if(j==i||j==i+1||i==1&&j==2)continue;
				mand&=a[j];
			}
			maxans=max(maxans,mand);
		}
	}
	if(n<=13){
		ll b[15]={};
		ll maxans=0;
		if(m==2){
			for(b[2]=1;b[2]<=n;b[2]++)
			maxans=max(maxans,maxx&a[b[2]]);
		}if(m==3){
			for(b[2]=1;b[2]<=n;b[2]++)
			for(b[3]=1;b[3]<=n;b[3]++)
			maxans=max(maxans,maxx&a[b[2]]&a[b[3]]);
		}if(m==4){
			for(b[2]=1;b[2]<=n;b[2]++)
			for(b[3]=1;b[3]<=n;b[3]++)
			for(b[4]=1;b[4]<=n;b[4]++)
			maxans=max(maxans,maxx&a[b[3]])&a[b[4]]&a[b[2]];
		}if(m==5){
			for(b[2]=1;b[2]<=n;b[2]++)
			for(b[3]=1;b[3]<=n;b[3]++)
			for(b[4]=1;b[4]<=n;b[4]++)
			for(b[5]=1;b[5]<=n;b[5]++)
			maxans=max(maxans,maxx&a[b[2]]&a[b[3]]&a[b[4]]&a[b[5]]);
		}if(m==6){
			for(b[2]=1;b[2]<=n;b[2]++)
			for(b[3]=1;b[3]<=n;b[3]++)
			for(b[4]=1;b[4]<=n;b[4]++)
			for(b[5]=1;b[5]<=n;b[5]++)
			for(b[6]=1;b[6]<=n;b[6]++)
			maxans=max(maxans,maxx&a[b[2]]&a[b[3]]&a[b[4]]&a[b[5]]&a[b[6]]);
		}if(m==7){
			for(b[2]=1;b[2]<=n;b[2]++)
			for(b[3]=1;b[3]<=n;b[3]++)
			for(b[4]=1;b[4]<=n;b[4]++)
			for(b[5]=1;b[5]<=n;b[5]++)
			for(b[6]=1;b[6]<=n;b[6]++)
			for(b[7]=1;b[7]<=n;b[7]++)
			
			maxans=max(maxans,maxx&a[b[2]]&a[b[3]]&a[b[4]]&a[b[5]]&a[b[6]]&a[b[7]]);
		}if(m==8){
			for(b[2]=1;b[2]<=n;b[2]++)
			for(b[3]=1;b[3]<=n;b[3]++)
			for(b[4]=1;b[4]<=n;b[4]++)
			for(b[5]=1;b[5]<=n;b[5]++)
			for(b[6]=1;b[6]<=n;b[6]++)
			for(b[7]=1;b[7]<=n;b[7]++)
			for(b[8]=1;b[8]<=n;b[8]++)
			
			maxans=max(maxans,maxx&a[b[2]]&a[b[3]]&a[b[4]]&a[b[5]]&a[b[6]]&a[b[7]]&a[b[8]]);
		}if(m==9){
			for(b[2]=1;b[2]<=n;b[2]++)
			for(b[3]=1;b[3]<=n;b[3]++)
			for(b[4]=1;b[4]<=n;b[4]++)
			for(b[5]=1;b[5]<=n;b[5]++)
			for(b[6]=1;b[6]<=n;b[6]++)
			for(b[7]=1;b[7]<=n;b[7]++)
			for(b[8]=1;b[8]<=n;b[8]++)
			for(b[9]=1;b[9]<=n;b[9]++)
			
			maxans=max(maxans,maxx&a[b[2]]&a[b[3]]&a[b[4]]&a[b[5]]&a[b[6]]&a[b[7]]&a[b[8]]&a[b[9]]);
		}if(m==10){
			for(b[2]=1;b[2]<=n;b[2]++)
			for(b[3]=1;b[3]<=n;b[3]++)
			for(b[4]=1;b[4]<=n;b[4]++)
			for(b[5]=1;b[5]<=n;b[5]++)
			for(b[6]=1;b[6]<=n;b[6]++)
			for(b[7]=1;b[7]<=n;b[7]++)
			for(b[8]=1;b[8]<=n;b[8]++)
			for(b[9]=1;b[9]<=n;b[9]++)
			
			for(b[10]=1;b[10]<=n;b[10]++)
			maxans=max(maxans,maxx&a[b[2]]&a[b[3]]&a[b[4]]&a[b[5]]&a[b[6]]&a[b[7]]&a[b[8]]&a[b[9]]&a[b[10]]);
		}if(m==11){
			for(b[2]=1;b[2]<=n;b[2]++)
			for(b[3]=1;b[3]<=n;b[3]++)
			for(b[4]=1;b[4]<=n;b[4]++)
			for(b[5]=1;b[5]<=n;b[5]++)
			for(b[6]=1;b[6]<=n;b[6]++)
			for(b[7]=1;b[7]<=n;b[7]++)
			for(b[8]=1;b[8]<=n;b[8]++)
			for(b[9]=1;b[9]<=n;b[9]++)
			
			for(b[10]=1;b[10]<=n;b[10]++)
			for(b[11]=1;b[11]<=n;b[11]++)
			maxans=max(maxans,maxx&a[b[2]]&a[b[3]]&a[b[4]]&a[b[5]]&a[b[6]]&a[b[7]]&a[b[8]]&a[b[9]]&a[b[10]]&a[b[11]]);
		}if(m==12){
			for(b[2]=1;b[2]<=n;b[2]++)
			for(b[3]=1;b[3]<=n;b[3]++)
			for(b[4]=1;b[4]<=n;b[4]++)
			for(b[5]=1;b[5]<=n;b[5]++)
			for(b[6]=1;b[6]<=n;b[6]++)
			for(b[7]=1;b[7]<=n;b[7]++)
			for(b[8]=1;b[8]<=n;b[8]++)
			for(b[9]=1;b[9]<=n;b[9]++)
			
			for(b[10]=1;b[10]<=n;b[10]++)
			for(b[11]=1;b[11]<=n;b[11]++)
			for(b[12]=1;b[12]<=n;b[12]++)
			maxans=max(maxans,maxx&a[b[2]]&a[b[3]]&a[b[4]]&a[b[5]]&a[b[6]]&a[b[7]]&a[b[8]]&a[b[9]]&a[b[10]]&a[b[11]]&a[b[12]]);
		}if(m==13){
			for(b[2]=1;b[2]<=n;b[2]++)
			for(b[3]=1;b[3]<=n;b[3]++)
			for(b[4]=1;b[4]<=n;b[4]++)
			for(b[5]=1;b[5]<=n;b[5]++)
			for(b[6]=1;b[6]<=n;b[6]++)
			for(b[7]=1;b[7]<=n;b[7]++)
			for(b[8]=1;b[8]<=n;b[8]++)
			for(b[9]=1;b[9]<=n;b[9]++)
			
			for(b[10]=1;b[10]<=n;b[10]++)
			for(b[11]=1;b[11]<=n;b[11]++)
			for(b[12]=1;b[12]<=n;b[12]++)
			for(b[13]=1;b[13]<=n;b[13]++)
			maxans=max(maxans,maxx&a[b[2]]&a[b[3]]&a[b[4]]&a[b[5]]&a[b[6]]&a[b[7]]&a[b[8]]&a[b[9]]&a[b[10]]&a[b[11]]&a[b[12]]&a[b[13]]);
		}
		cout<<maxans;
	}
	
	
	cout<<maxx;
	return 0;
}

