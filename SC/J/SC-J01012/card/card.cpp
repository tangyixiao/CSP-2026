#include<bits/stdc++.h>
using namespace std;
const int N=5e5+3;
const int M=3e5+3;
int n,m;
int a[N];
vector<int>b;
int zai[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	memset(zai,0,sizeof(zai));
	for(int ju=1;ju<=n;ju++){
		while(!b.empty()){
			b.pop_back();
		}
		for(int i=ju;i<=n;i++){
			for(int j=0;j<b.size();j++){
				if(b[j]==a[i]){
					int len=b.size();
					for(int z=len;z>=j+1;z--){
						b.pop_back();
					}
					break;
				}
			}
			b.push_back(a[i]);
		}
		for(int i=0;i<b.size();i++){
			zai[b[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<zai[i]<<" ";
	}
	
	return 0; 
}