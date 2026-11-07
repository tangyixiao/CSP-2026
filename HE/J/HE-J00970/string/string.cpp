#include<bits/stdc++.h>
using namespace std;
#define int long long
//pts90-100
int sum_len,n,siz,ans;
char ch;
vector<pair<int,char> > beg,las;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>siz>>ch;
		sum_len+=siz;
		beg.push_back(make_pair(siz,ch));
	}
	for(int i=n-1,sum_tmp=0;true;i--){
		if(sum_tmp+beg.back().first>=sum_len/2) {
			las.push_back(beg.back());
			las.back().first=sum_len-sum_tmp/2,sum_tmp=sum_len/2;
			beg.back().first=sum_len-las.back().first;
			if(sum_len%2) las.back().first--;
			break;
		}else{
			las.push_back(beg.back());
			beg.erase(beg.end());
			sum_tmp+=las.back().first;
		}
	}
	while(!beg.empty()){
		if(beg[0].second==las[0].second){
			if(beg[0].first<las[0].first){
				las[0].first-=beg[0].first;
				beg.erase(beg.begin());
			}else if(beg[0].first>las[0].first){
				beg[0].first-=las[0].first;
				las.erase(las.begin());
			}else{
				beg.erase(beg.begin());
				las.erase(las.begin());
			}
		}else{
			ans+=min(las[0].first,beg[0].first);
			if(beg[0].first<las[0].first){
				las[0].first-=beg[0].first;
				beg.erase(beg.begin());
			}else if(beg[0].first>las[0].first){
				beg[0].first-=las[0].first;
				las.erase(las.begin());
			}else{
				beg.erase(beg.begin());
				las.erase(las.begin());
			}
		}
	}
	cout<<ans;
	return 0;
} 
//AC
