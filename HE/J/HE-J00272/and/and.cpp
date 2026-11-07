#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n,m;int a[200005];
bool bi[200005][32];//二进制 
vector<int> is1[35];//第i位为1下表n 
//int isn[200005];//第i个数从第0~i有多少个1 
bool bj[200005];

bool check(int need_f,int is1xb){
	vector<int> temp = is1[is1xb];
	int l = 0,r=temp.size()-1,mid = (l+r)/2;
	while(l<=r){
		mid = (l+r)/2;
		if(temp[mid]==need_f){
			return 1;
		}
		else if(temp[mid]>need_f){
			r = mid-1;
		}
		else{
			l = mid+1;
		}
	}
	return 0;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i<=n;i++){
		cin >> a[i];
		int t = a[i];
		int pos=1;
		while(t){
			bi[i][pos++] = t&1;
			t = t>>1;
		}
	}
	/*for(int i =1;i<=n;i++){
		for(int j = 31;j>0;j--){
			cout << bi[i][j] << " ";
		}
		cout << endl;
	}*/
	for(int j = 1;j<=31;j++){
		int addit =0;
		for(int i =1;i<=n;i++){
			addit+=bi[i][j];
			if(bi[i][j]==1){
				is1[j].push_back(i);
			} 
		}
	}
	/*for(int i =1;i<=31;i++){
		for(int j = 0;j<is1[i].size();j++)cout << is1[i][j] << " ";
		cout << endl;
	}*/
	ll ans = 0;
	for(int j = 31;j>0;j--){
		if(m<=is1[j].size()){
			queue<int> che;
			for(int i = 0;i<is1[j].size();i++){
				che.push(is1[j][i]);
			}
			while(!che.empty()){
				int now_l = che.size();
				if(now_l>=m){
					ans = ans+(1<<(j-1));
				}
				j--;
				for(int i = 1;i<=now_l;i++){
					int txb = che.front();
					che.pop();
					//if(is1[j].find(txb)!=is1[j].end()){
						//che.push(txb);
					//}
					//int pos = lower_bound(is1[j].begin(),is1[j].end(),txb)-is1[j];
					bool is_fround = check(txb,j);
					if(is_fround){
						//cout <<"yes";
						//printf("j:%d,txb:%d\n",j,txb);
						che.push(txb);
					}
				}
			}
		}
	}
	cout << ans;
	return 0;
} 
