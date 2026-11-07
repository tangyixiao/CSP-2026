#include<bits/stdc++.h>
using namespace std;
int n;
set<int> id,tmp;
set<int> blocks[200010]
int type[200010],idx;
inline void Comb(int x,int y){
	//x<-y
	set<int>::iterator it;
	for(it=blocks[y].begin();it!=blocks[y].end();it++){
		blocks[x].insert((*it));
	}
	blocks[y].clear();
}
int main(){
//  freopen("string.in","r",stdin)
//  freopen("string.out","w".stdout)
    ios::sync_with_stdio(false);
	cin>>n;
	int lst=-1;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		if(x!=lst){
			idx++;
			type[idx]=x;
			id.insert(idx);
			blocks[idx].insert(i);
			lst=x;
		}
		else{
			blocks[idx].insert(i);
		}
	}
	//cout<<idx<<endl;
	set<int>::iterator it,it1;
	while(id.size()){
		tmp.clear();
		bool flag;
		flag=true;
		for(it=id.begin();it!=id.end();it++){
			if(!flag) cout<<' ';
			else flag=false;
			int now=(*it);
			cout<<*(blocks[now].begin());
			blocks[now].erase(blocks[now].begin());
			if(blocks[now].size()) tmp.insert(now);
		}
		cout<<endl;
		int now=(*(tmp.begin()));
		while(1){
			it=tmp.upper_bound(now);
			if(it==tmp.end()) break;
			int nxt;
			nxt=(*it);
			if(type[now]!=type[nxt]){
				now=nxt;
				continue;
			}
			if(block[now].size()>=block[nxt].size()){
				Comb(now,nxt);
			}
			else{
				Comb(nxt,now);
				swap(block[now],block[nxt]);
			}
			tmp.erase(it);
		}
		swap(tmp.id);
	}
	return 0;
}

