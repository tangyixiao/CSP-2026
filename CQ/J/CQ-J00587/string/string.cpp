#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int main(){
	ios::sync_with_stdio(false),cin.tie(nullptr);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int a;
	cin>>a;
	vector<pair<int,char>> arr(a);
	for(int i=0;i<a;++i){
		cin>>arr[i].first>>arr[i].second;
	}
	long long cnt=0;
	for(int l=0,r=a-1;l<r;){
		if(arr[l].second==arr[r].second){
			if(arr[l].first>arr[r].first){
				arr[l].first-=arr[r].first;
				--r;
			}else if(arr[l].first==arr[r].first){
				++l,--r;
			}else{
				arr[r].first-=arr[l].first;
				++l;
			}
		}else{
			if(arr[l].first>arr[r].first){
				arr[l].first-=arr[r].first;
				cnt+=arr[r].first;
				--r;
			}else if(arr[l].first==arr[r].first){
				cnt+=arr[l].first;
				++l,--r;
			}else{
				arr[r].first-=arr[l].first;
				cnt+=arr[l].first;
				++l;
			}
		}
	}
	cout<<cnt<<"\n";
	return 0;}
