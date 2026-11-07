#include <bits/stdc++.h>
using namespace std;

int n;
pair<int,char> a[200010];
pair<long long,char> ans[200010];
long long sum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n;
	int id=0;
	for(int i=1;i<=n;i++){
		cin>>a[i].first>>a[i].second;
		if(a[i].second==a[i-1].second){
			ans[id].first+=a[i].first;
			ans[id].second=a[i].second;
		}else{
			id++;
			ans[id].first+=a[i].first;
			ans[id].second=a[i].second;
		}
		
	}
	for(int i=1;i<=id/2;){
		for(int j=id;j>=(id+1)/2;){
			if(ans[i].second==ans[j].second){
				if(ans[i].first==ans[j].first){
					i++;
					j--;
				}else{
					if(ans[i].first>ans[j].first){
						ans[i].first-=ans[j].first;
						j--;
					}else if(ans[i].first<ans[j].first){
						ans[j].first-=ans[i].first;
						i++;
					}else{
						i++;j--;
					}
				}
			}else{
				if(ans[i].first>ans[j].first){
					sum+=ans[j].first;
					ans[i].first-=ans[j].first;
					j--;
				}else if(ans[i].first<ans[j].first){
					sum+=ans[i].first;
					ans[j].first-=ans[i].first;
					i++;
				}else{
					sum+=ans[i].first;
					i++;j--;
				}
			}
			
		}
	}
	cout<<sum;
	return 0;
}