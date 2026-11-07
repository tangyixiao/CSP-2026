#include<iostream>
#include<cmath>
using namespace std;
int n;
struct wei{
	int l[32];
}a[200010];
int x;
void f(int num,int i){
	int len = 0;
	while(num){
		a[i].l[len++] = num % 2;
		num /= 2;
	}
	for(int j = 0;j <= 15;j++)
		swap(a[i].l[j],a[i].l[30 - j]);
}
int ans1[32];
int t[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i = 0;i < n;i++){
		cin>>x;
		f(x,i);
	}
	for(int i = 0;i <= 30;i++){
		int s = 0;
		for(int j = 0;j < n;j++){
			if(t[j] == 1){
				if(ans1[i - 1] != 2)
					t[j] = 0;
				else
					t[j] = 2;
			}
			if(t[j] == 0){
				s += a[j].l[i];
				if(a[j].l[i] == 0)
					t[j] = 1;
			}
		}
		if(s >= m)
			ans1[i] = 2;
	}
	int ans2 = 0;
	for(int i = 0;i <= 30;i++)
		if(ans1[i] != 0)
			ans2 += pow(2,30 - i);
	cout<<ans2;
	fclose(stdin);
	fclose(stdout);
	return 0;
}