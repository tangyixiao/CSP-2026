#include<bits/stdc++.h>

using namespace std;
using ll = long long;

const int LOG=30;

int n,m,tot;
int Trie[7000005][2];
int sum[7000005];

void File(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
}

void Insert(int num){
	int now=0;
	for(int i=LOG;i>=0;i--){
		bool py=num&(1<<i);
		if(!Trie[now][py]){
			tot++;
			Trie[now][py]=tot;
		}
		now=Trie[now][py];
	} 
	sum[now]++;
}

void DFS(int now){
	if(Trie[now][0]&&!sum[Trie[now][0]]){
		DFS(Trie[now][0]);
	}
	if(Trie[now][1]&&!sum[Trie[now][1]]){
		DFS(Trie[now][1]);
	}
	if(now){
		sum[now]=sum[Trie[now][0]]+sum[Trie[now][1]];
	}
}

int Calculate(){
	int ans=0;
	vector<int>v1,v2;
	v1.push_back(0);
	for(int i=LOG;i>=0;i--){
		int num=0;
		for(auto j:v1){
			num+=sum[Trie[j][1]];
		}
		v2.clear();
		for(auto j:v1){
			if(Trie[j][1]){
				v2.push_back(Trie[j][1]);
			}
		}
		if(num<m){
			for(auto j:v1){
				if(Trie[j][0]){
					v2.push_back(Trie[j][0]);
				}
			}
		}else{
			ans^=(1<<i);
		}
		v1=v2;
	}
	return ans;
}

int main(){
	File();
	cin>>n>>m;
	for(int i=1,num;i<=n;i++){
		cin>>num;
		Insert(num);
	}
	DFS(0);
	cout<<Calculate();
	return 0;
}
/*
Yellow AC
*/
