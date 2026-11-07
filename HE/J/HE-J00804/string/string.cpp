#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
struct WALL{
	int many;
	char ch;
}start[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	long long len=0;
	for(int i=1;i<=n;i++){
		cin>>start[i].many>>start[i].ch;
		len+=start[i].many;
	}
	for(int i=1;i<=n;i++){
		if(start[i].ch==start[i+1].ch){
			start[i+1].many+=start[i].many;
			start[i].many==0;
		}
	}
	int mid=0;
	for(int i=1;i<=n;i++){
		long long v=0;
		v+=start[i].many;
		if(v>=len/2+1){
			mid=i;
		} 
	}
	long long ans=0;
	for(int l=1,r=n;l<=(len%2==0?mid-1:mid);){
		while(start[l].many==0){
			l++;
		}while(start[r].ch==0){
			r--;
		}
		if(start[l].many>start[r].many){
			start[l].many-=start[r].many;
			start[r].many=0;r--;
			ans+=start[r].many;
		}
		if(start[r].many>start[l].many){
			start[r].many-=start[l].many;
			start[l].many=0;l++;
			ans+=start[l].many;
		}
	}
	cout<<ans;
	return 0;
}
