#include<bits/stdc++.h>
#define int long long
using namespace std;
bool w[200100][33];
int a[200200];
int num[40];
vector<int>x;
bool cmp(int a,int b){
	return a>b; 
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	//&
	int n=0,m=0,maxwei=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int x=0;
		x=a[i];
		int mi2=1,wei=0;
		while(x){
			w[i][wei]=x%2;
			if(x%2==1)num[wei]++;
			x/=2;
			wei++;
		}
//		maxwei=max(maxwei,wei);
//		id.push_back(i);
	}
//	int ans=0;
	int maxmid=0;
	for(int i=33;i>=0;i--){
//		cout<<num[i]<<"\n";
		if(num[i]>=m){
			maxmid=i;
			break;
		}
	}
	for(int i=1;i<=n;i++){
		if(w[i][maxmid]){
			x.push_back(a[i]);
//			cout<<a[i]<<" ";
		}
	}
//	cout<<"\n";
	sort(x.begin(),x.end(),cmp);
	cout<<x[m-1];
//	cout<<maxmid<<"\n";
//	int mid=1;
//	for(int i=1;i<=maxmid+1;i++){
//		mid*=2;
//	}
//	cout<<mid<<" \n";
//	sort(a+1,a+n+1,cmp);
//	for(int i=1;i<=n;i++){
//		if(a[i]<mid){
////			cout<<a[i]<<" ";
//			if(i+m<=n)cout<<a[i+m];
//			else cout<<a[n];
//			break;
//		}
//	}
//	cout<<ans;
	return 0;
} 
//5 3
//31 3 1 15 7
//4 2
//3 15 12 12