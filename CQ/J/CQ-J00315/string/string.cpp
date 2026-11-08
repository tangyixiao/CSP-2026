#include<bits/stdc++.h>
using namespace std;
long long n;
struct node{
	long long cnt;
	char s;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	long long sum=0;
	for(long long i=1;i<=n;i++){
		cin >> a[i].cnt >>a[i].s;
		sum+=a[i].cnt; 
	}
	long long cnt1=0;
	long long i=1,j=n;
	while(i<j){
		if(a[i].s!=a[j].s){
			if(a[i].cnt>a[j].cnt){
				a[i].cnt-=a[j].cnt;
				cnt1+=a[j].cnt;
				a[j].cnt=0;
				j--;
			}
			else{
				a[j].cnt-=a[i].cnt;
				cnt1+=a[i].cnt;
				a[i].cnt=0;
				i++;
			}
		}
		else{
			if(a[i].cnt>a[j].cnt){
				a[i].cnt-=a[j].cnt;
				a[j].cnt=0;
				j--;
			}
			else{
				a[j].cnt-=a[i].cnt;
				a[i].cnt=0;
				i++;
			}
		}
		if(a[j].cnt<=0){
			j--;
		}
		if(a[i].cnt<=0){
			i++;
		}
	}
	cout << cnt1;
	return 0;
}
