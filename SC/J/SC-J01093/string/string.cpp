#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
struct Node{
	int num;
	char ch;
}str[200005];
int lens;
int ans;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>str[i].num>>str[i].ch;
		lens+=str[i].num;
	}
	if(lens%2==0){
		int lenl=str[1].num,lenr=str[n].num,cnt=0;
		int l=1,r=n;
		while(1){
			if(l<r){
				if(str[l].ch!=str[r].ch){
					if(lenl<=lenr){
						l++;
						ans+=lenl;
						lenr-=lenl;
						lenl=str[l].num;
						cnt+=lenl;
					}
					else if(lenl==lenr){
						l++;
						r--;
						cnt+=lenl;
						lenl=str[l].num;
						lenr=str[r].num;
					}
					else{
						r--;
						ans+=lenr;
						lenl-=lenr;
						lenr=str[r].num;
						cnt+=lenr;
					}
				}
				else{
					if(lenl<=lenr){
						l++;
						lenr-=lenl;
						lenl=str[l].num;
						cnt+=lenl;
					}
					else if(lenl==lenr){
						l++;
						r--;
						cnt+=lenl;
						lenl=str[l].num;
						lenr=str[r].num;
					}
					else{
						r--;
						lenl-=lenr;
						lenr=str[r].num;
						cnt+=lenr;
					}
				}
			}
			else break;
			//cout<<str[l].ch<<" "<<lenl<<" "<<str[r].ch<<" "<<lenr<<"\n";
		}
		cout<<ans;
	}
	else{
		int lenl=str[1].num,lenr=str[n].num,cnt=0;
		int l=1,r=n;
		while(1){
			if(l<r){
				if(str[l].ch!=str[r].ch){
					if(lenl<lenr){
						l++;
						ans+=lenl;
						lenr-=lenl;
						cnt+=lenl;
						lenl=str[l].num;
					}
					else if(lenl==lenr){
						l++;
						r--;
						ans+=lenl;
						cnt+=lenl;
						lenl=str[l].num;
						lenr=str[r].num;
					}
					else{
						r--;
						ans+=lenr;
						lenl-=lenr;
						cnt+=lenr;
						lenr=str[r].num;
					}
				}
				else{
					if(lenl<=lenr){
						l++;
						lenr-=lenl;
						cnt+=lenl;
						lenl=str[l].num;
					}
					else if(lenl==lenr){
						l++;
						r--;
						cnt+=lenl;
						lenl=str[l].num;
						lenr=str[r].num;
					}
					else{
						r--;
						lenl-=lenr;
						cnt+=lenr;
						lenr=str[r].num;
					}
				}
				//cout<<str[l].ch<<" "<<lenl<<" "<<str[r].ch<<" "<<lenr<<"\n";
			}
			else break;
		}
		cout<<ans;
	}
	return 0;
} 