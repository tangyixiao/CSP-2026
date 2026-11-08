#include <iostream>
#include <fstream>
using namespace std;
using ll=long long;
int main(){
	ifstream in("and.in");
	ofstream out("and.out");
	int m,n;
	ll a[200100];
	in>>n>>m;
	for(int i=1;i<=n;i++){
		in>>a[i];
	}
	int ans=0,it=0;
	for(int i=1;i<=m;i++){
		for(int l=1;l<=n;l++){
			if(a[l]>it) {
				it=a[l];
				a[l]=-1;
			}
		}
		if(ans==0) ans=it;
		else ans&=it;
		it=0;
	}
	out<<ans;
	return 0;
}
