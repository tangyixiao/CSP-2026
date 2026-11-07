#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
const int N=200005;
int a[N];char c[N];
int qnum=0;
int ans=0;
struct node{
	char c;
	int num;
}q[N];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		qnum++;
		q[qnum]={c[i],a[i]};
	}
	int t1=1,t2=qnum;
	while(t1<t2){
		if(q[t1].c==q[t2].c){
			if(q[t1].num==q[t2].num)t1++,t2--;
			else if(q[t1].num<q[t2].num)q[t2].num-=q[t1].num,t1++;
			else if(q[t1].num>q[t2].num)q[t1].num-=q[t2].num,t2--;
		}else{
			if(q[t1].num==q[t2].num){
				ans+=q[t1].num;
				t1++,t2--;
			}else if(q[t1].num<q[t2].num){
				ans+=q[t1].num;
				q[t2].num-=q[t1].num;
				t1++;
			}else if(q[t1].num>q[t2].num){
				ans+=q[t2].num;
				q[t1].num-=q[t2].num;
				t2--;
			}
		}
	}
	cout<<ans;
}
