#include<bits/stdc++.h>
using namespace std;
long long a[500055];
vector<long long> desk;
long long desk_left=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
	for(long long q=1;q<=n;q++){
		for(long long i=q;i<n;i++){
			bool x=false;
			for(long long j=0;j<desk.size()-1;j++){
				if(a[i]==desk[j]){
					x=true;
					desk_left=j;
				}
				if(x){
					desk[i]=0;
				}
			}
			if(desk.size()==0||desk[desk.size()-1]==0){
				desk.push_back(a[i]);
				desk_left++;
			}
			else{
				desk[desk_left+1]=a[i];
				desk_left++;
			}
			
		}
		for(long long i=0;i<m;i++){
			for(long long j=0;j<=desk_left;j++){
				
			}
		}
	}
	return 0;
}