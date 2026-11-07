#include<iostream>
using namespace std;
#define int long long
const int maxn=200005;
bool survive[maxn];
int a[maxn];
bool sur_tmp[maxn];
int n;
int m;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<maxn;i++)survive[i]=true;
	for(int k=31;k>=0;k--){
		for(int i=0;i<maxn;i++)sur_tmp[i]=true;
		int poww=(1<<k);
		for(int i=0;i<n;i++){
			if(!(poww&a[i]))sur_tmp[i]=false;
		} 
		int cnt_sur_tmp=0;
		for(int i=0;i<n;i++){
			if(sur_tmp[i]&&survive[i])cnt_sur_tmp++;
		}
		if(cnt_sur_tmp>=m){
			for(int i=0;i<n;i++){
				if(!sur_tmp[i])survive[i]=false;
			}
		}
		//for(int i=0;i<n;i++)cout<<sur_tmp[i];
		//cout<<'\n';
	}
	int sum=(1<<31)-1;
	int cnt=0;
	for(int i=0;i<n;i++){
	//	cout<<survive[i];
		if(survive[i]&&cnt<m)sum&=a[i];
	}
	cout<<sum;
	return 0;
}
