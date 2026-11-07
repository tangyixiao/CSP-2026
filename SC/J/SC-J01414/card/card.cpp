#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
queue<int> q;
int ans[300005]={0};
class carwd{
	private:
		int c=0;
		int st=0;
	public:
		int gc(){
			return c;
		}
		void desto(){
			c=0;st=0;
		}
		void sta(int c1){
			c=c1;
			st++;
		}
};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		q.push(x);
	}
	for(int r=0;r<=m;r++){
		queue<int> q1=q;
		carwd st[100005];
		int I=0;
		for(int i=0;i<r;i++){
			q1.pop();
		}
		while(!q1.empty()){
			int x=q1.front();
			q1.pop();
			bool f=0;
			for(int i=0;i<I;i++){
				if(f==1){
					st[i].desto();
				}
				else if(st[i].gc()==x){//yi miao bian yi
					f=1;
				}
			}
			if(f==0){
				st[I++].sta(x);
			}
		}
		for(int i=0;i<=I;i++){
			if(st[i].gc()<=m){
				ans[st[i].gc()]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}	
	return 0;
}