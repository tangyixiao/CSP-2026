#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 2e5+10;
ll a[N];
char c[N];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	
	int r=n;
	
	ll res=0,cnt;
	for(int l=1;l<=r;){
		if(l!=r){
			cnt=min(a[l],a[r]);
			
			
			if(c[l] != c[r]){
				res+=cnt; 
			}
			
			a[l]-=cnt,a[r]-=cnt;
			if(!a[l]) l++;
			if(!a[r]) r--;
		}else{
			break;
		}
	}
	
	cout<<res;

	return 0;
}
/*
  6
 1000000000 a
 1000000000 a
 1000000000 a
 1000000000 b
 1000000000 b
 1000000000 b
*/