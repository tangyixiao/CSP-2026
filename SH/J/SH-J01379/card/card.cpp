#include<bits/stdc++.h>
using namespace std;

int n, m, a[500005]; //a:牌 
int appear[500005]; //appear:出现的地方
int cnt[500005]; 
int status[300005];

void playgame(int x){
	for(int i = 0; i <= m; ++i){
		status[i]= 0;
		appear[i] = 0;	
	}

	for(int i = x; i <= n; i++){//a[i]:牌上的点数 
		if(status[a[i]]){
			//cout<<a[i]<<" ";
			for(int j = appear[a[i]];j<i;++j){
				status[a[j]] = 0;
			}
			appear[a[i]] = i;
			status[a[i]] = 1;
		}
		else{
			appear[a[i]] = i;
			status[a[i]] = 1;
		}
	}
//	for(int i = 1; i <= m; ++i)
		//cout<<status[a[i]]<<" ";
	for(int i = 1; i <= m; ++i){
		cnt[i]+=status[i];	
//		cout<<status[i]<<" ";
	}

}

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w", stdout);
	cin>>n>>m;
	for(int i = 1; i <= n; ++i){
		cin>>a[i];
	}
	for(int i = 1; i <= n; ++i){
		playgame(i);
	//	cout<<endl;
	}
	for(int i = 1; i <= m; ++i){
		cout<<cnt[i]<<" ";
	}
}
