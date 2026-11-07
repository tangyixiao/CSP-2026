#include<bits/stdc++.h>
using namespace std;
int n,m;
char t;
map<int,char>mp;
vector<int>vec;
long long now=0;
long long ans=0;
const int SIZE=2e5+10;
int a[SIZE];
string s;
int main(){
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
    cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m;
		cin>>t;
		a[i]=m;
		now+=m;
		mp[now]=t;
		vec.push_back(now);
	}
	if(now%2==0){
		int i=0;
		int j=now/2;
		int stop=j;
		int k=1;
		while(1){
			int copy_i=i;
			i+=a[k++];
			if(i>stop){
				int now_num=stop-copy_i;
				char that11=mp[i];
				int j_loc=now-now_num;
				while(1){
					auto it22=lower_bound(vec.begin(),vec.end(),j_loc);
					char that22=mp[(*it22)];
					if(that11!=that22){
						ans+=(*it22)-j_loc;
					}
					j_loc=(*it22);
					if((*it22)==vec[vec.size()-1]) break;
				}
				break;
			}
			char that1=mp[i];
			j+=i-copy_i;
			auto it2=lower_bound(vec.begin(),vec.end(),j);
			char that2=mp[(*it2)];
			if(that1!=that2){
				ans+=i-copy_i;
			}
			if(it2==vec.end()) break;
		}
	}
	if(now%2==1){
		int i=0;
		int j=now/2;
		int stop=j;
		int k=1;
		while(1){
			int copy_i=i;
			i+=a[k++];
			if(i>stop){
				int now_num=stop-copy_i;
				char that11=mp[i];
				int j_loc=now-now_num;
				while(1){
					auto it22=lower_bound(vec.begin(),vec.end(),j_loc);
					char that22=mp[(*it22)];
					if(that11!=that22){
						ans+=(*it22)-j_loc;
					}
					j_loc=(*it22);
					if((*it22)==vec[vec.size()-1]) break;
				}
				break;
			}
			char that1=mp[i];
			j+=i-copy_i;
			auto it2=lower_bound(vec.begin(),vec.end(),j);
			char that2=mp[(*it2)];
			if(that1!=that2){
				ans+=i-copy_i;
			}
			if(it2==vec.end()) break;
		}
	}
	cout<<ans;
	return 0;
} 
