#include<bits/stdc++.h>
using namespace std;
const int maxn=5e5+10;
typedef long long ll;
ll n,m,index;//n:牌数&局数 m:最大牌点数 
ll a[maxn];//a[n]:出牌顺序 
ll p[maxn];//p[n]:牌堆现有牌 
ll mp[maxn];//桶排 
bool flag[maxn];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	for(ll t=0;t<=n-1;t++){
		for(ll i=1;i<=n;i++){
			flag[a[i]]=false;
			p[i]=0;
		}
		index=0;
	for(ll i=1+t;i<=n;i++){
		int idx=a[i];
		index++;
		if(flag[idx]==false){//第一次访问时 
			p[index]=a[i];
			flag[idx]=true;//标记已访问 
		}else if(flag[idx]==true){//第二次访问时-->清牌 
			for(int j=1;j<i;j++){
				flag[a[j]]=false;
				p[j]=0;
			}
			index=1;
			p[index]=a[i];
			flag[idx]=true;
		}
	}	
	for(int i=1;i<=n;i++){
		if(p[i]!=0){
			mp[p[i]]++;
		}
	}
	
	}
	for(int i=1;i<=m;i++){
		cout<<mp[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}