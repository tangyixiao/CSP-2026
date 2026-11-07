#include<iostream>
#include<cstdio>
#define ll long long
using namespace std;
int n,m;
ll a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	bool tag=true;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>=4) tag=false;
	}
	if(m==1){
		int big=0;
		for(int i=0;i<n;i++){
			if(a[i]>big){
				big=a[i];
			}
		}
		cout<<big;
		return 0;
	}
	if(m==2){
		int big=0;
		for(int i=0;i<n-1;i++) for(int j=i+1;j<n;j++) if((a[i]&a[j])>big) big=(a[i]&a[j]);
		cout<<big;
		return 0; 
	}
	if(tag){
		bool num[4];
		for(int i=0;i<n;i++) num[a[i]]=true;
		int x=n-1;
		int ans=1;
		for(int i=0;i<m;i++){
			if(num[x]){
				ans&=x;
				x--;
			}
		}
		cout<<ans;
	}
	return 0;
}
