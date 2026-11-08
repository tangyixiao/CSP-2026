#include <bits/stdc++.h>
using namespace std;
long long p[3000005];
struct k{
	long long id;
};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	vector<k>a(n+1);
	for(int i=1;i<=n;i++){
		cin>>a[i].id;
	}for(int i=1;i<=n;i++){
		vector<long long>nums(n+1,0);
		nums[a[i].id]=i;
		vector<bool>b(n+1,false),u(n+1,false);
		for(int j=i+1;j<=n;j++){
			if(nums[a[j].id]==0){
				nums[a[j].id]=j;
				continue;
			}for(int x=nums[a[j].id];x<j;x++){
				b[x]=true;
				nums[a[x].id]=0;
			}nums[a[j].id]=j;
		}for(int j=i;j<=n;j++){
			if(b[j]) continue;
			if(u[a[j].id]==false){
				u[a[j].id]=true;
				p[a[j].id]++;
			}
		}
	}for(int i=1;i<=m;i++) cout<<p[i]<<' ';
	return 0;
}
