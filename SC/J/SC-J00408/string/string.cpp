#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
struct xi{
	int a;
	char s;
}nums[N];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	unsigned long long len=0;
	for(int i=1;i<=n;i++){
		cin>>nums[i].a>>nums[i].s;
		len+=nums[i].a;
	}
	long long last=0;
	unsigned long long res=0;
	int zy=0;
	char c='q';
	int jj=-1;
	for(int i=0,j=n+1;i<j,j>i;){
		if(j==i+1 and i==j-1){
//			res+=last;
			jj=i;
			break;
			
		}
		if(zy==0){
			i++;
			j--;
			
			if(nums[i].a>nums[j].a){
//				cout<<1;
				zy=1;
				last=nums[i].a-nums[j].a;
				c=nums[i].s;
//				cout<<1;
				if(nums[i].s!=nums[j].s){
					res+=nums[j].a;
				}
				
			}
			else if(nums[i].a<nums[j].a){
				zy=2;
				last=nums[j].a-nums[i].a;
				c=nums[j].s;
				if(nums[i].s!=nums[j].s){
					res+=nums[i].a;
				}
			}
			else{
				zy=0;
				if(nums[i].s!=nums[j].s){
					res+=nums[j].a;
				}
			}
		}
		else if(zy==1){
			j--;
			if(nums[j].a==last){
				zy=0;
				if(nums[j].s!=c){
					res+=nums[j].a;
				}
			}
			else if(nums[j].a>last){
				zy=2;
				if(c!=nums[j].s){
					res+=last;
//					cout<<' '<<res;
				}
			}
			else{
				zy=1;
				if(c!=nums[j].s){
					res+=nums[j].a;
				}
			}
		}
		else{
			i++;
			if(nums[j].a==last){
				zy=0;
				if(nums[j].s!=c){
					res+=nums[j].a;
				}
			}
			else if(nums[i].a>last){
				zy=1;
				if(c!=nums[i].s){
					res+=last;
				}
			}
			else{
				zy=2;
				if(c!=nums[i].s){
					res+=nums[i].a;
				}
			}
		}
	}
//	if(zy!=0){
//		res+=last;
//	}
	cout<<res;
//	cout<<len;
	return 0;
}
