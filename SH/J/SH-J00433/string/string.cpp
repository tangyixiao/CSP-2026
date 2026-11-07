#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int n;
	cin>>n;
	vector<long long> cnt;vector<char> c;
	long long int sum=0;char last='0';
	for(int i=0;i<n;i++){
		long long k;char d;
		cin>>k>>d;
		if(d==last) sum+=k;
			else{
				if(sum!=0){
					cnt.push_back(sum);
					c.push_back(last);
				}
				sum=k;
				last=d;
			}
	}
	cnt.push_back(sum);
	c.push_back(last);
	int len=cnt.size();
	if(len==1){
		cout<<0;
		return 0;
	}
	int l=0,r=len-1;
	long long ans=0;
	while(l<r){
		if(c[l]!=c[r]) ans+=min(cnt[l],cnt[r]);
		if(cnt[l]>cnt[r]) {
			cnt[l]-=cnt[r--];
		}else if(cnt[l]<cnt[r]){
			cnt[r]-=cnt[l++];
		}else{
			l++;r--;
		}
	}
	cout<<ans;
	return 0;
}

