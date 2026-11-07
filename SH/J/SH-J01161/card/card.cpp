#include <bits/stdc++.h>
using namespace std;
const int maxn=5e5+5;
struct node{
	int h,t,val;
}a[maxn];
int x[maxn];
int tail=0,head=0;
int n,m;
int cnt=1;
int ans[maxn];
void clear(){
	a[0].t=-1;
	head=0;
	cnt=1;
	tail=0;
}
void add(int x){
	a[tail].t=cnt;
	a[cnt].h=tail;
	a[cnt].t=-1;
	a[cnt].val=x;
	tail=cnt;
	cnt++;
}
void del(int x){
	a[a[x].h].t=-1;
	tail=a[x].h;
}
void see(){
	int now=0;
	//cout<<"a"<<head<<' '<<tail<<endl; 
	while(now!=-1){
		cout<<a[now].val<<' ';
		now=a[now].t;
	}
	cout<<endl;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	cin>>n>>m;
	a[0].t=-1;
	for(int i=1;i<=n;i++) cin>>x[i];
	for(int i=1;i<=n;i++){
		clear();
		for(int j=i;j<=n;j++){
			int now=head;
			while(now!=-1){
				if(a[now].val==x[j]){
					del(now);
					break;
				}
				now=a[now].t;
			}
			add(x[j]);
			//see();
		}
		
		int now=head;
		while(now!=-1){
			ans[a[now].val]++;
			now=a[now].t;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}
