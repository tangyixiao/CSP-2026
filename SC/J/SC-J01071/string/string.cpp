#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
struct{
	int num;
	string s;
}a[N];
struct{
	int num;
	string s;
}mp[N];
int flag=0;
int si=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long all_n=0;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].s;
		all_n+=a[i].num;
	}
	if(all_n%2==1){
		all_n+=1;
	}
	long long sum=0;
	for(int i=1;i<=n;i++){
		sum+=a[i].num;
		if(sum>all_n/2){
			flag=1;
			si=i;
			break;
		}
		if(sum==all_n/2){
			si=i;
			break;
		}
		mp[i].num=a[i].num;
		mp[i].s=a[i].s;
	}
	if(flag==1){
		mp[si].num=a[si].num-(sum-all_n/2);
		a[si].num-=(sum-all_n/2);
		mp[si].s=a[si].s;
	}
	int j=1;
	long long ans=0;
	for(int i=n;i>=si;i--){
		while(a[i].num!=0){
			if(a[i].s!=mp[j].s){
				ans+=min(a[i].num,mp[j].num);
				a[i].num-=min(a[i].num,mp[j].num);
				mp[j].num-=min(a[i].num,mp[j].num);
				if(mp[j].num==0){
					j++;
				}
			}
			else{
				a[i].num-=min(a[i].num,mp[j].num);
				mp[j].num-=min(a[i].num,mp[j].num);
				if(mp[j].num==0){
					j++;
				}
			}
		}
	}
	cout<<ans;
	return 0;
} 