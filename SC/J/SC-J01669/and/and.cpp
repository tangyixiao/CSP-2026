#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],f[200005],v=1;
vector<int> v1,v2;
int pow(int x){
	int s=1;
	for(int i=1;i<=x;i++){
		s*=10;
	}
	return s;
}
int p(int y){
	int s=1;
	for(int i=1;i<=y;i++){
		s*=2;
	}
	return s;
}
int change(int x){
	int cnt=0,d=0;
	while(x!=0){
		cnt+=(x%10)*p(d);
		d++;
		x/=10;
	}
	return cnt;
}
int andd(int x,int y){
	v1.clear();
	v2.clear();
	while(x>0){
		v1.push_back(x%2);
		x/=2;
	}
	while(y>0){
		v2.push_back(y%2);
		y/=2;
	}
	int cnt=0,d=0;

	for(int i=min(v1.size(),v2.size())-1;i>=0;i--){
		if(v1[i]==v2[i]&&v1[i]==1){
			cnt*=pow(d);
			cnt++;
			
		}
		d++; 
	}

	cnt=change(cnt);
	return cnt;
}
int main(){
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
  cin>>n>>m;
  for(int i=1;i<=n;i++) cin>>a[i];
  sort(a+1,a+n+1);
  for(int i=1;i<=m;i++){
  	f[i]=a[n+1-i];
  	
  }
 
  for(int i=1;i<m;i++){
  	f[i+1]=andd(f[i],f[i+1]);
  }
  cout<<f[m];
	return 0;
}  