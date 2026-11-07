#include<iostream>
#include<vector>
using namespace std;
const int MAXN=1e5+3;
struct H{
	int ip;
	bool h=1;
};
vector<H> v;
int Go[3*MAXN];
H T[5*MAXN];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		H t;
		cin>>t.ip;
		v.push_back(t);
	}
	for(int sta=0;sta<n;sta++){
		for(int i=1;i<=m;i++){
		T[i].h=0;
		T[i].ip=-1;
	}
		for(int i=sta;i<n;i++){
			int cur=v[i].ip;
			if(T[cur].h==1){
				for(int j=T[cur].ip;j<i;j++){
					v[j].h=0;
				}
				for(int j=0;j<i;j++){
					if(v[j].h){
						T[v[j].ip].h=1;
						T[v[j].ip].ip=j;
					}
				}
			}
			T[cur].h=1;
			T[cur].ip=i;
		}
		for(int i=1;i<=m;i++){
			if(T[i].h)
			Go[i]++;
		}
		for(int i=0;i<n;i++){
			v[i].h=1;
		}
	}
	
	for(int i=1;i<=m;i++)
	cout<<Go[i]<<' ';
	return 0;
}
