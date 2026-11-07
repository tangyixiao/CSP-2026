#include <cstdio>
using namespace std;
int n,m; 
vector<int> a;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=0,q;i<n;i++)	
		scanf("%d",&q),a.empalce_back(q);
	return 0;
} 
