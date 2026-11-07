#include <iostream>
using namespace std;
int a[500005];
int c[500005];
int l[500005];
int cc;
int maxx(int l[500005]){
	int mx = 0;
	for(int y = 0;y < 500005;y++){
		mx = max(l[y],mx);
	}
	return mx;
}
bool findlist(int l[500005],int i){
	for(int ik = 0;ik<500005;ik++){
		if(l[ik] == i){
			return true;
		}
	}
	return false;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int i = 0;i < n;i++){
		for(int j = i;j < n;j++){
			for(int ij = 0;ij < j;ij++){
				if(a[i] == a[ij]){
					for(int ji = i;ji < ij;ji++){
						c[ji] = 0;
					}
				}
				else{
					c[ij] = a[ij];
				}
			}
		}
	}
	cc = maxx(c);
	int cnt = 0;
	for(int i = 1;i < cc;i++){
		if(findlist(c,i)){
			for(int j = 0;j < 500005;j++){
				if(c[j] == i){
					cnt+=i;
				}
			}
			cout << cnt << " ";
			cnt = 0;
		}
	}
	
	return 0;
}
