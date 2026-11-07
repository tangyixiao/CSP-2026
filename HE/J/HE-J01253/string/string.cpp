#include<bits/stdc++.h>
using namespace std;
struct str_a{
	int lenth;
	int nowl;
	char c;
};
str_a a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].lenth>>a[i].c;
		a[i].nowl=a[i].lenth;
	}
	int l=1,r=n;
	int num=0;
	while (1){
		if((l==r)||(l>r)){
			break;
		}
		if(a[l].nowl>a[r].nowl){
			if(a[l].c==a[r].c){
				a[l].nowl-=a[r].nowl;
				r--;
			}else{
				num+=a[r].nowl;
				a[l].nowl-=a[r].nowl;
				r--;
			}
		}else if(a[l].nowl<a[r].nowl){
			if(a[l].c==a[r].c){
				a[r].nowl-=a[l].nowl;
				l++;
			}else{
				num+=a[l].nowl;
				a[r].nowl-=a[l].nowl;
				l++;
			}
		} else{
			if(a[l].c==a[r].c){
				r--;
				l++;
			}else{
				num+=a[r].nowl;
				r--;
				l++;
			}
		}
	}
	cout<<num;
	return 0;
} 
