#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10; 
int m,n,cnt,t,mm;
long long a,ans,mid;
bool flag[N][35];
queue<int> q[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a;
		mid=a;
		cnt=0;
		while(mid!=0){
			if(mid%2==1){
				q[cnt].push(i);
				flag[i][cnt]=1;
			}
			cnt++;
			mid/=2;
		}
	}
	cnt=30;
	while(cnt>=0){
		if(q[cnt].size()>=m){
			ans=pow(2,cnt);
			break;
		}
		cnt--;
	}
	while(cnt>0){
		mm=q[cnt-1].size();
		while(mm>0){
			t=q[cnt-1].front();
			q[cnt-1].pop();
			if(flag[t][cnt]==1){
				q[cnt-1].push(t);
			}
			else{
				flag[t][cnt-1]=0;
			}
			mm--;
		}
		if(q[cnt-1].size()>=m){
			ans+=pow(2,cnt-1);
		}
		cnt--;
	}
	cout<<ans;
	return 0;
}