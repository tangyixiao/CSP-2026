#include<bits/stdc++.h>
using namespace std;
pair<int,char> pa[300000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<=n-1;i++){
		int x;
		char ch;
		cin>>x>>ch;
		pa[i]={x,ch};
	}
	int l=0;
	int r=n-1;
	long long cnt=0;
	while(l<r){
		if(pa[l].second==pa[r].second){
			if(pa[l].first<pa[r].first){
				pa[r].first-=pa[l].first;
				l++;
			}
			else if(pa[r].first<pa[l].first){
				pa[l].first-=pa[r].first;
				r--;
			}
			else if(pa[l].first==pa[r].first){
				l++;
				r--;
			}
		}else{
			if(pa[l].first<pa[r].first){
			//	cout<<1<<endl;
				pa[r].first-=pa[l].first;
				cnt+=pa[l].first;
				l++;
			}
			else if(pa[r].first<pa[l].first){
			//	cout<<2<<endl;
				pa[l].first-=pa[r].first;
				cnt+=pa[r].first;
				r--;
			}
			else if(pa[l].first==pa[r].first){
			//	cout<<l<<" "<<r<<endl;
				cnt+=pa[l].first;
				l++;
				r--;
			}
		}
	}
	cout<<cnt;
	return 0;
}
