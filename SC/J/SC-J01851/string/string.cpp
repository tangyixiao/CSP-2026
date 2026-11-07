#include<bits/stdc++.h>
using namespace std;
struct Numb{
	long long num;
	char c; 
};
int n;
long long ans;
Numb a[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].c;
	}
	for(int i=1,j=n;i<j;){
		if(a[i].c==a[j].c){
			if(a[i].num>a[j].num){
				a[i].num-=a[j].num;
				j--;
			}else if(a[i].num<a[j].num){
				a[j].num-=a[i].num;
				i++;
			}else{
				i++,j--;
			}
		}else{
			if(a[i].num>a[j].num){
				ans+=a[j].num;
				a[i].num-=a[j].num;
				j--;
			}else if(a[i].num<a[j].num){
				ans+=a[i].num;
				a[j].num-=a[i].num;
				i++;
			}else{
				ans+=a[i].num;
				i++,j--;
			}
		}
	}
	cout<<ans;
	return 0;
}