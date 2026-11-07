#include<bits/stdc++.h>
using namespace std;
long long ans;
struct duan{
	int len;
	char typ;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
	int n;
	cin>>n;
	vector<duan> vec;
	vec.reserve(200005);
	for(int i=0;i<n;i++){
		int times;
		char chr;
		cin>>times>>chr;
		vec.push_back({times,chr});
	}int l=0,r=vec.size()-1;
	long long lsum=0,rsum=0;
	while(l<r){
		if(vec[l].typ==vec[r].typ){
			//lsum+=min(vec[l].len,vec[r].len);
			//rsum+=min(vec[l].len,vec[r].len);
			if(vec[l].len<vec[r].len){
				vec[r].len-=vec[l].len;
				l++;
			}else if(vec[l].len>vec[r].len){
				vec[l].len-=vec[r].len;
				r--;
			}else{
				l++,r--;
			}
		}else{
			ans+=min(vec[l].len,vec[r].len);
			if(vec[l].len<vec[r].len){
				vec[r].len-=vec[l].len;
				l++;
			}else if(vec[l].len>vec[r].len){
				vec[l].len-=vec[r].len;
				r--;
			}else{
				l++,r--;
			}
		}
	}cout<<ans;
	return 0;
}