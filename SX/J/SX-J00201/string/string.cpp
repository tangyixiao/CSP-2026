#include<bits/stdc++.h>
using namespace std;
struct node{
	int num,name;
}a[200005];
int n;
long long sum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i<=n;i++){
		char c;
		cin >> a[i].num >> c;
		a[i].name = (int)(c-'a'+1);

	}
	int l = 1,r = n;
	for(int i =1;i<=n&&l<r;i++){
		if(a[l].num == a[r].num){
			if(a[l].name != a[r].name){
				sum += a[l].num;
			}
			l++;
			r--;
		}
	else if(a[l].num>a[r].num){
		if(a[l].name!=a[r].name){
			sum+=a[r].num;

		}
		a[l].num-=a[r].num;
		r--;

	}else{
		if(a[l].name!=a[r].name){
			sum+=a[l].num;
		}
		a[r].num-=a[l].num;
		l++;
	}

	}
	cout << sum;

		return 0;
}