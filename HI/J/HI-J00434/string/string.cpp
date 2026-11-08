#include<bits/stdc++.h>
using namespace std;
struct st{
	long long a;
	char c;
}sz[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>sz[i].a>>sz[i].c;
	}
	long long left = 1,right = n;
	long long cnt = 0,la1 = sz[left].a,la2 = sz[right].a;
	char lc1 = sz[left].c,lc2 = sz[right].c;
	while(left <= right){
		if(la1 < la2){
			if(lc1 != lc2){
				cnt += la1;
			}
			la2 = la2 - la1;
			left++;
			la1 = sz[left].a;
			lc1 = sz[left].c;
		}else if(la1 > la2){
			if(lc1 != lc2){
				cnt += la2;
			}
			la1 = la1 - la2; 
			right--;
			la2 = sz[right].a;
			lc2 = sz[right].c;
		}else{
			if(lc1 != lc2){
				cnt += la1;
			}
			left++;
			right--;
			la1 = sz[left].a;
			la2 = sz[right].a;
			lc1 = sz[left].c;
			lc2 = sz[right].c;
		}
	}
	cout<<cnt;
	return 0;
}
