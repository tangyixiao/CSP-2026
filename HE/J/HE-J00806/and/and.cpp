#include<iostream>
#include<vector>
using namespace std;
struct haveit{
	int ip[32]={};
	bool h=true;
};
vector<haveit> a;
int AND(int &k1,int k2[]){
	int ans[33]={},ind=0;
	while(k1>0&&ind!=33){
		if((k1&1)==1&&k2[ind+1]==1){
		ans[ind]=1;
	}
		ind++;
		k1>>=1;
	}
	int num=0;
	for(int i=32;i>=0;i--){
		num+=ans[i];
		num<<=1;
	}
	return num;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		haveit t;
		int able,ind=1;
		cin>>able;
		while(able){
			t.ip[ind]=able&1;
			able>>=1;
			ind++;
		}
		a.push_back(t);
	}
	int hy;
	long long ran=0;
	for(int g=30;g>=1;g--){
		hy=0;
		for(int i=0;i<n;i++){
			if(!a[i].h)
			continue;
			if(a[i].ip[g]==1)
			hy++;
		}
		if(hy>=m){
			ran++;
			ran<<=1;
			for(int i=0;i<n;i++){
			if(!a[i].h)
			continue;
			if(a[i].ip[g]==0)
			a[i].h=0;
		}
		} else ran<<=1;
		if(hy==m)
		break;
	}
	if(hy!=m){
		cout<<(ran>>1);
		return 0;
	}
	int answer=((1LL*1)<<31)-1;
	for(int i=0;i<n;i++){
		if(a[i].h){
			int A=answer;
			answer=(AND(A,a[i].ip)>>1);
		}
	}
	cout<<answer;
	return 0;
} 
