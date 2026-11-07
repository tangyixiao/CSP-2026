#include<bits/stdc++.h>
using namespace std;
int s[300005];//a从上到下点数 s牌出现个数 
long long f[300005]; 
deque<int> q;//桌面上现有的牌 
deque<int> a;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int aa;
		cin>>aa;
		a.push_front(aa);
	}
	for(int i=1;i<=n;i++){//局数 
		for(int j=1;j<=n;j++){//轮数 
			//有没有出现过
			if(f[a[j]]==0){
				q.push_front(a[j]);
				f[a[j]]=1; 
			}else{
				int f1=0;
				for(int k=1;k<=j;k++){
					if(q[k]==a[j]){
						f1=1;
					}
					if(f1==0){
						continue;
					}else{
						q.pop_front();
					}
				}
				q.push_front(a[j]);
			}
		} 
		while(q.size()!=0){
			s[q.front()]++;
			q.pop_front();
		}
		//整理牌堆 
		a.pop_back();
	}
	for(int i=1;i<=m;i++){
		cout<<s[i];
	}
	return 0;
} 