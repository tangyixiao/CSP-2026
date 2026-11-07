#include<bits/stdc++.h>
using namespace std;
int num,cnt,arr[200005],ans=0,ma=0,maxn=0,ans2=0;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>num>>cnt;
	for(int i=0;i<num;i++){
		cin>>arr[i];
		if(arr[i]>ma){
			ma=arr[i];
		}
	}
	if(cnt==1){
		cout<<ma;
		return 0;
	}
	if(cnt==2){
		int aa;
		for(int i=0;i<num;i++){
			for(int j=i+1;j<num;j++){
				aa=arr[i]&arr[j];
				if(aa>maxn){
					maxn=aa;
				}
			}
		}
		cout<<maxn;
		return 0;
	}
	if(cnt==num){
		ans=arr[0];
		for(int i=1;i<num;i++){
			ans&=arr[i];
		}
		cout<<ans;
		return 0; 
	}
	sort(arr,arr+num,cmp);
	ans2=arr[0];
	for(int i=1;i<cnt;i++){
		ans2&=arr[i];
	}
	cout<<ans2;
	return 0;
}