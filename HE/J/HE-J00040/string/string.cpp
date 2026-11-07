#include<bits/stdc++.h>
using namespace std;
struct t{
	long long x;
	char c;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n;
	cin>>n;
	vector<t> vec(n);
	long long cnt = 0;
	for(long long i = 0;i < n;i++){
		cin>>vec[i].x>>vec[i].c;
		cnt += vec[i].x;
	}
	long long ans = 0;
	long long j = vec.size() - 1;
	long long i = 0;
	cnt = 0;
	while(i < j){
		if(vec[i].c != vec[j].c){
			ans += min(vec[i].x,vec[j].x);
			if(max(vec[i].x,vec[j].x) == vec[i].x && max(vec[i].x,vec[j].x) == vec[j].x){
				vec[i].x = 0;
				vec[j].x = 0;
				i++;
				j--;
				cnt += 2;
			}else if(max(vec[i].x,vec[j].x) == vec[i].x){
				vec[i].x = vec[i].x - vec[j].x;
				vec[j].x = 0;
				j--;
				cnt++;
			}else{
				vec[j].x = vec[j].x - vec[i].x;
				vec[i].x = 0;
				i++;
				cnt++;
			}
		}else{
			if(max(vec[i].x,vec[j].x) == vec[i].x && max(vec[i].x,vec[j].x) == vec[j].x){
				vec[i].x = 0;
				vec[j].x = 0;
				i++;
				j--;
				cnt += 2;
			}else if(max(vec[i].x,vec[j].x) == vec[i].x){
				vec[i].x = vec[i].x - vec[j].x;
				vec[j].x = 0;
				j--;
				cnt++;
			}else{
				vec[j].x = vec[j].x - vec[i].x;
				vec[i].x = 0;
				i++;
				cnt++;
			}
		}
	}
	cout<<ans<<'\n';
	return 0;
}
