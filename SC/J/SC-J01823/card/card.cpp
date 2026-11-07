#include<bits/stdc++.h>
using namespace std;
const int N = 5e5+10;
int a[N],cnt[N];
int ump[N];
vector<int> card;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	
	for(int round=1;round<=n;round++){
		memset(ump,0,sizeof ump);
		card.clear();
		
		for(int i=round;i<=n;i++){
			
			while(ump[a[i]]){
				ump[card.back()] --;
				card.pop_back();	
			}
			
			ump[a[i]] ++;
			card.push_back(a[i]);
		}
		
		for(auto x : card){
			cnt[x]++;
		}
		
	}
	
	for(int i=1;i<=m;i++){
		cout<<cnt[i];
		if(i != m) cout<<' ';
	}
	
	return 0;
}
/*
上午考J组，下午还要考S组。。。
我想上电视可以吗。。。
貌似J很简单，may be 100+100+100+48=348，SC 1=线总不可能上300吧。。。，评测机不要卡我常555，那么S组一定就很难了吧。。。
如果S我没有1=，I'll AAAAAAFFFFFFFFFFFOOOOOOOOOO。
也是直接遗憾离场了。。。

下午S我会继续写的，所以可以蹲一个后续。。。 
*/