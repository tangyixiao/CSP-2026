#include<iostream>
using namespace std;
int main(){
//  freopen("travel.in","r",stdin)
//  freopen("travel.out","w".stdout)
	string c1,s1,c2,s2;
	bool a=0,b=0,c=0,d=0;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		a=1;
	}
	else{
		a=0;
	}
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
