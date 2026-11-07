#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int a;cin>>a;
	vector<pair<long long,char>> b(a+1);
	long long c=0,d=0,x=a,y=1;
	for(int i=1;i<=a;i++){
		cin>>b[i].first>>b[i].second,c+=b[i].first;
	}long long a1=(c+1)/2;
	for(int i=1;i<=a;i++){
		if(b[i].first>=a1){
			for(int j=i+1;j<=a;j++) if(b[j].second!=b[i].second) d+=b[j].first;
			break;
		}else{
			if(b[y].first>=b[x].first){	
				int z=0;
				if(b[y].first==b[x].first) z=1;	
				if(b[y].second!=b[x].second) d+=b[x].first;
				b[y].first-=b[x].first,b[x].first=0,x--;
				y+=z;
			}else{
				if(b[y].second!=b[x].second) d+=b[y].first;
				b[x].first-=b[y].first,b[y].first=0;
				y++;
			}
		}
	}cout<<d;
	return 0;
}
