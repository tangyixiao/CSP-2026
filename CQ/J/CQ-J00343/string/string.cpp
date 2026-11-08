#include<bits/stdc++.h>
using namespace std;

string s;

struct zf{
	long long num;
	char c;
}arr[200005];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%lld %c",&arr[i].num,&arr[i].c);
	}
	//cout<<1<<'\n';
	int l=1,r=n;
	long long ans=0;
	while(l<=r){
		if(arr[l].c==arr[r].c) {
			if(arr[l].num>arr[r].num){
				arr[l].num-=arr[r].num;
				r--;
			}else if(arr[l].num<arr[r].num){
				arr[r].num-=arr[l].num;
				l++;
			}else{
				l++;
				r--;
			}
		}else{
			if(arr[l].num>arr[r].num){
				arr[l].num-=arr[r].num;
				ans+=arr[r].num;
				r--;
			}else if(arr[l].num<arr[r].num){
				arr[r].num-=arr[l].num;
				ans+=arr[l].num;
				l++;
			}else{
				l++;
				ans+=arr[r].num;
				r--;
			}
		}
	}
	cout<<ans;
	/*
	long long gs;
	for(int i=1;i<=n;i++){
		long long a;
		char c;
		gs+=a;
		scanf("%lld %c",&a,&c);
		for(int i=1;i<=a;i++){
			s+=c;
		}
	}
	long long ans=0;
	long long lenn=s.size();
	for(int i=0;i<=(n+1)/2;i++){
		if(s[i]==s[lenn-i-1]) continue;
		ans++;
	}
	cout<<ans;
	*/
	
	return 0;
}
