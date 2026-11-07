#include<bits/stdc++.h>
using namespace std;
int n;
struct node{
	long long num; char ans;
}a[200005];
int main(){
	freopen("string.in","r",stdin); freopen("string.out","w",stdout); 
	cin>>n;
	for(int i=1;i<=n;i++){
		long long aa; char bb;
		cin>>aa>>bb;
		a[i].num=aa; a[i].ans=bb;
		//cout<<aa<<" "<<bb;
	}
	int l=1,r=n; long long answer=0;
	while(l<r){
		if(a[l].num!=a[r].num){
			if(a[l].num>a[r].num){
				if(a[l].ans!=a[r].ans){
					answer+=a[r].num;
					//cout<<answer<<a[l].num<<a[r].num<<endl;
					a[l].num=a[l].num-a[r].num;
					r--;
				}
				else{
					a[l].num=a[l].num-a[r].num;
					r--;
				}
			}
			else{
				if(a[l].ans!=a[r].ans){
					answer+=a[l].num;
					//cout<<answer<<a[l].num<<a[r].num<<endl;
					a[r].num=a[r].num-a[l].num;
					l++;
				}
				else{
					a[r].num=a[r].num-a[l].num;
					l++;
				}
			}
		}
		else{
			if(a[l].ans==a[r].ans){
				l++; r--;
			}
			else{
				answer+=a[l].num;
				l++; r--;
				//cout<<answer<<a[l].num<<a[r].num<<endl;
			} 
		} 
		//cout<<l<<r<<a[1].num<<a[2].num;
	}
	cout<<answer;
	fclose(stdin);fclose(stdout);
} 