#include<bits/stdc++.h>
#define lnt long long
#define endl '\n'
using namespace std;
const int N=2e5+10;
lnt a[N];
int b[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("and.in","r",stdin); 
	freopen("and.out","w",stdout); 
	int n,m;cin>>n>>m;
	lnt max_=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=2;
		max_=max(max_,a[i]);
	}
	int cnt=n;
	lnt tst=1;
	int aaa=1;
	while(1){
		max_/=2;
		if(max_==0){
			break;
		}
		tst*=2;
		aaa++;
	}
	//cout<<aaa;
	lnt ans=tst*2-1;
	for(;aaa>=1;aaa--){
		int cntt=cnt;
		for(int j=1;j<=n;j++){
			//cout<<tst;
			if(b[j]==2){
				if((a[j]&tst)==0){
					cntt--;
					b[j]=1;
				}
			}
		}
		if(cntt<m){
			for(int j=1;j<=n;j++){
				
				if(b[j]==1){
					b[j]=2;
				}
			}
			//cout<<cntt;
			break;
		}
		for(int j=1;j<=n;j++){
			
			if(b[j]==1){
				b[j]=0;
			}
		}
		cnt=cntt;
		tst/=2;
	}
	ans-=tst*2-1;
	//cout<<ans;
	
	for(;aaa>=1;aaa--){
		int cntt=0;
		for(int j=1;j<=n;j++){
			//cout<<tst;
			//cout<<b[j]<<' '; 
			if(b[j]==2){
				if((a[j]&tst)!=0){
					cntt++;
					b[j]=3;
				}
			}
		}
		//cout<<endl;
		//cout<<cntt;
		if(cntt>=m){
			for(int j=1;j<=n;j++){
				//cout<<tst;
				if(b[j]==2){
					b[j]=0;
				}
				if(b[j]==3){
					b[j]=2;
				}
			}
			ans+=tst;
		}
		else{
			for(int j=1;j<=n;j++){
				//cout<<tst;
				if(b[j]==3){
					b[j]=2;
				}
			}
		}
		tst/=2;
	}
	cout<<ans;
	return 0;
} 
/*
4 2
3 15 13 12
*/
