#include <bits/stdc++.h>
using namespace std;

struct node{
	int n,n1;
};
bool cmp(node a,node b){
	if (a.n1 != b.n1) return a.n1 > b.n1;
	else return a.n > b.n;
}
node num[200005];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,s,m;
	long long ans = pow(2,30);
	cin >> n >> m;
	if (n <= 2000){
		for (int i = 0;i < n;i++){
			cin >> s;
			num[i].n = s;
			int a = 0;
			while (s){
				if (s & 1) a++;
				s /= 2;
			}
			num[i].n1 = a;
		}
		sort(num,num+n,cmp);
		ans = num[0].n;
		for (int i = 1;i < m;i++){
			ans = ans&num[i].n;
		}
		cout << ans;
	}
	else{ 
		for (int i = 0;i < n;i++){
			cin >> s;
			num[i].n = s;
			int a = 0;
			while (s){
				if (s & 1) a++;
				s /= 2;
			}
			num[i].n1 = a;
		}
		sort(num,num+n,cmp);
		ans = num[0].n;
		for (int i = 1;i < m;i++){
			ans = ans&num[i].n;
		}
		cout << ans;
	}
	
	return 0;
}
