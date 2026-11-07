#include<bits/stdc++.h>
#define it long long
#define C cin
#define CC cout
#define ru >>
#define chu <<
#define rt return
#define rg if
#define fz else
#define mian int main
#define cit const it
#define xiao_deng <=
#define da_deng >=
#define xiaoyu <
#define dayu >
#define vec vector
#define pk push_back
using namespace std;
cit inf=1e9;
cit N=2e5+5;

it n,m;
it a[N];
it sum[N];

it cal(it x){
	while(1){
		rg(x*2 dayu a[n]){
			rt x;
		}
		x*=2;
	}
}

bool cmp(it l,it r){
	rg(sum[l]==sum[r]){
		rt l dayu r;
	}
	rt sum[l] dayu sum[r];
}

mian(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	C ru n ru m;
	for(it i=1;i xiao_deng n;i++){
		C ru a[i];
	}
	sort(a+1,a+1+n);
	it mx=cal(1);
	queue<it>q;
	mx*=2;
	while(q.size() xiaoyu m){
		for(it i=n;i da_deng n-q.size()+1;i--){
			a[i]-=mx;
			q.pop();
		}
		sort(a+1,a+1+n);
		mx/=2;
		for(it i=n;a[i] da_deng mx;i--){
			q.push(a[i]);
		}
	}
	it nn=q.size();
	vec<it>g(nn+5);
	for(it i=1;i xiao_deng nn;i++){
		g[i]=q.front();
		q.pop();
	}
	vec<it>c[40];
	it x=g[1];
	it res=0;
	while(x){
		res++;
		x/=2;
	}
	for(it i=1;i xiao_deng res;i++){
		for(it j=2;j xiao_deng nn;j++){
			rg(((g[j]>>(res-i))%2)&((g[1]>>(res-i))%2) == 1){
				rg(sum[j]==0){
					c[i].pk(g[j]);
				}
				sum[j]++;
			}
		}
		sort(c[i].begin(),c[i].end(),cmp);
	}
	it ans=g[1];
	for(it i=1;i xiao_deng res;i++){
		for(it j=0;j xiaoyu c[i].size();j++){
			rg(m dayu 1){
				ans&=c[i][j];
				m--;
			}
		}
	}
	CC chu ans;
	
	rt 0;
}



/*
4 2
13 10 9 4
*/











