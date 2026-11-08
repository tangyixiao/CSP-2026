#include<cstdio>
#include<unordered_map>
#include<vector>
#include<algorithm>
int n,m,a[500005],cnt[500005];
class table{
	private:	
		std::unordered_map<int,std::vector<int>::iterator>mp;
		std::vector<int>lis;
	public:
		table(){}
		size_t size(){
			return lis.size();
		}
		void push(const int& k){
			if(mp.count(k)){
				while(!lis.empty()&&lis.back()!=k){
					mp.erase(lis.back());
					lis.pop_back();
				}			
			}
			else{
				lis.push_back(k);			
			}
			mp[k]=std::prev(lis.end());	
		}
		bool count(const int& k){
			return mp.count(k);
		}
};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",a+i);
	}
	for(int i=1;i<=n;i++){
		table now;
		for(int j=i;j<=n;j++){
			now.push(a[j]);
		} 
		for(int j=1;j<=m;j++){
			if(now.count(j)){
				cnt[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",cnt[i]);
	}
} 
