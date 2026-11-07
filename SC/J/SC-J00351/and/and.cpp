#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[100000];
long long c[35];
vector<int>bv[35];
void pickout_(long long x,int j){
	int i=1;
	while(x>0){
		if(x%2==1){
			c[i]++;
			bv[i].push_back(j);
		}
		x/=2;
		i++;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		pickout_(a[i],i);
	}
	int h=1;
	long long ans=0;
	while(1){
		h=0;
		for(int i=31;i>=1;i--){
			if(c[i]>=m){
				h=i;
				break;
			}
		}
		//cout<<h<<" ";
		if(h==0){
			break;
		}
		ans+=(1<<(h-1));
		//cout<<ans<<"\n";
		memset(c,0,sizeof(c));
		vector<int>j;
		for(int i:bv[h]){
			j.push_back(i);
			a[i]=a[i]%(1<<(h-1));
		}
		memset(bv,0,sizeof(bv));
		for(int i:j){
			pickout_(a[i],i);
		}
	}
	cout<<ans;
	return 0;
}
/*5 3
 31 3 1 15 7*/