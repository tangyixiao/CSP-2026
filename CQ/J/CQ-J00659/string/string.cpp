#include<bits/stdc++.h>
using namespace std;
const int MAXX=2e5+5; 
int a[MAXX];
char c[MAXX];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,left=0,right,l_number,r_number;
	long long MAX_cnt=0;
	cin>>n;
	right=n-1;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	l_number=a[left];
	r_number=a[right];
	while(left<=right){
		if(l_number<r_number){
			if(c[left]!=c[right]) MAX_cnt+=l_number;
			r_number=r_number-l_number;
			left++;
			l_number=a[left];
		}
		else if(l_number>r_number){
			if(c[left]!=c[right]) MAX_cnt+=r_number;
			l_number=l_number-r_number;
			right--;
			r_number=a[right];
		}
		else{
			if(c[left]!=c[right]) MAX_cnt+=l_number;
			left++;
			l_number=a[left];
			right--;
			r_number=a[right];
		}
	}
	cout<<MAX_cnt;
	return 0;
}
