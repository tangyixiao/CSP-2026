#include <bits/stdc++.h>
using namespace std;
struct node{
	long long shu;
	string name;
};
int n;
node a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i].shu >> a[i].name;
	}
	long long l=1,r=n,sum=0;
	while(l<r){
		if (a[l].shu>a[r].shu){
			a[l].shu-=a[r].shu;
			if (a[l].name!=a[r].name){
				sum+=a[r].shu;
			}
			r--;
		}else if (a[r].shu>a[l].shu){
			a[r].shu-=a[l].shu;
			if (a[l].name!=a[r].name){
				sum+=a[l].shu;
			}
			l++;
		}else if (a[l].shu==a[r].shu){
			if (a[l].name!=a[r].name){
				sum+=a[r].shu;
			}
			l++;
			r--;
		}
	}
	cout << sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
