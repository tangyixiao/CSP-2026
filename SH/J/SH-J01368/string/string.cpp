#include<bits/stdc++.h>
using namespace std;
#define int long long
struct node{
	int num;
	char ans;
}a[200010]; 
int ANSS=0;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int cnt=0;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].ans;
		cnt+=a[i].num;
	}int i=1,j=n;
	if(cnt%2==1){
		cnt--;
	}
	int nx,ny,aa,bb;
	while(cnt>0){
		nx=a[i].num;
		ny=a[j].num;
		aa=a[i].ans;
		bb=a[j].ans;
		if(aa==bb){
			cnt-=2*min(nx,ny);
			if(nx>ny){
				j--;
				a[i].num-=min(nx,ny);
			}else if(nx==ny){
				a[i].num-=min(nx,ny);
				a[j].num-=min(nx,ny);
				i++;
				j--;
			}else{
				i++;
				a[j].num-=min(nx,ny);
			}
		}else{
			cnt-=2*min(nx,ny);
			ANSS+=min(nx,ny);
			if(nx>ny){
				j--;
				a[i].num-=min(nx,ny);
			}else if(nx==ny){
				a[i].num-=min(nx,ny);
				a[j].num-=min(nx,ny);
				i++;
				j--;
			}else{
				i++;
				a[j].num-=min(nx,ny);
			}
		}
	}
	cout<<ANSS;
}
