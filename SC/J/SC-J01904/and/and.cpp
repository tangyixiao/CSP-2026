#include<bits/extc++.h>
using namespace std;
using namespace __gnu_pbds;

int n,m,maxw,ans;
vector<int> v[31];
gp_hash_table<int,bool> h;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int a,cnt=0;
		cin>>a;
		while(a>0){
			if(a%2==1){
				v[cnt].push_back(i);
			}a/=2;
			cnt++;
		}maxw=max(maxw,cnt-1);
	}while(maxw>=0&&(int)v[maxw].size()<m){
		maxw--;
	}if(maxw<0){
		cout<<0;
		return 0;
	}vector<int> hx=v[maxw];
	for(int y:hx){
		h[y]=true;
	}
	ans+=pow(2,maxw);
	for(int i=maxw-1;i>=0;i--){
		vector<int> ls;
		for(int y:v[i]){
			if(h[y]){
				ls.push_back(y);
			}
		}if((int)ls.size()>=m){
			ans+=pow(2,i);
			hx=ls;
			h.clear();
			for(int y:hx){
				h[y]=true;
			}
		}
	}cout<<ans;
}