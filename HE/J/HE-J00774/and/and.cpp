#include<bits/stdc++.h> 
using namespace std;
long long n,m,maxid;

struct stu{
	long long s,yi;
}a[200005],max1[200005];
int a1(int x){
	return x^-x;
} 
int b1(int x){
	int sum = 0;
	for(int i = x;i > 0;i -= a1(i)){
		sum++;
	}
	return sum;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i <= n;i++){
		cin>>a[i].s;
		a[i].yi = b1(a[i].s);
	}
	for(int i = 1;i <= m;i++){
		a[maxid].yi = -1;a[maxid].s = 0;
		for(int j = 1;j <= n;j++){
			if(a[j].yi > max1[i].yi){
				max1[i].yi=a[j].yi;
				max1[i].s=a[j].s;
				maxid = j;
			} 
			else if(a[j].yi == max1[i].yi&&a[j].s > max1[i].s){
				max1[i].yi=a[j].yi;
				max1[i].s=a[j].s;
				maxid = j;
			}
		}
	}
	
	int ans = max1[1].s;
	for(int i = 1;i <= m;i++){
		ans = ans&max1[i].s;
	}
	cout<<ans;
	return 0;
}
