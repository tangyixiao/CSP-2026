#include<iostream>
using namespace std;

int n;
long long blocks[200005];
long long ans=0;
char bc[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> blocks[i] >> bc[i];
	}
	int l=1;
	int r=n;
	while(l<r){
		if(blocks[l]==blocks[r]){
			if(bc[l]!=bc[r])ans+=blocks[l];
			l++;
			r--;
		}else if(blocks[l]<blocks[r]){
			if(bc[l]!=bc[r])ans+=blocks[l];
			blocks[r]-=blocks[l];
			l++;
			
		}else{
			if(bc[l]!=bc[r])ans+=blocks[r];
			blocks[l]-=blocks[r];
			r--;
			
		}
	}
	cout << ans;
	return 0;
}
