#include<bits/stdc++.h>
#define int long long

using namespace std;
struct node{
	int cnt;
	char sym;
};
signed main(){
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0); 
	//注意！！一定要检查 解除注释 
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	vector<node> arry;
	for(int i = 0;i<n;i++){
		node a;
		cin>>a.cnt>>a.sym;
		arry.push_back(a);
	}
	int ans = 0;
	int i = 0,j = arry.size()-1;
	while(i<j){
		if(arry[i].sym==arry[j].sym){
			int minn = min(arry[i].cnt,arry[j].cnt); 
			arry[i].cnt-=minn;
			arry[j].cnt-=minn;
			if(arry[i].cnt<=0){
				i++;
			}
			if(arry[j].cnt<=0){
				j--;
			}
			
		}else{
			int minn = min(arry[i].cnt,arry[j].cnt); 
			ans+=minn;
			arry[i].cnt-=minn;
			arry[j].cnt-=minn;
			if(arry[i].cnt<=0){
				i++;
			}
			if(arry[j].cnt<=0){
				j--;
			}
		}
	}
	cout<<ans;
	return 0;
}
