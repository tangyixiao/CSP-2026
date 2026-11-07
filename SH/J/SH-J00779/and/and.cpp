#include <iostream>
using namespace std;
int a[200005];

int ad(int a,int b,int maxx){
	return max(a & b,maxx);
}
int add(int a,int b,int maxx,int t){
	for(int i = 0;i < t;i++){
		maxx = max(ad(a,b,maxx),maxx);
	}
	return maxx;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int max = 0;
	for(int i = 0;i < n;i++){
		for(int j = 1;j < i;j++){
			max = add(a[i],a[i + j],max,m);
		}
	}
	cout << max;
	return 0;
} 

