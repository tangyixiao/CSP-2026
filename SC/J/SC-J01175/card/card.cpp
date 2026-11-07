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
#define brk break
using namespace std;
cit inf=1e9;
cit N=5e5+5;

it a[N];
it t[N];
it ans[N];

mian(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	it n,m;
	C ru n ru m;
	for(it i=1;i xiao_deng n;i++){
		C ru a[i];
	}
	for(it x=1;x xiao_deng n;x++){
		memset(t,0,sizeof(t));
		stack<it>st;
		for(it i=x;i xiao_deng n;i++){
			rg(t[a[i]]==1){
				while(1){
					it y=st.top();
					t[y]--;
					st.pop();
					rg(y==a[i]){
						brk;
					}
				}
			}
			st.push(a[i]);
			t[a[i]]++;
		}
		for(it j=1;j xiao_deng m;j++){
			rg(t[j]){
				ans[j]++;
			}
		}
	}
	for(it i=1;i xiao_deng m;i++){
		CC chu ans[i] chu ' ';
	}
	
	rt 0;
}



/*
4 3
1 2 1 3
*/











