#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
struct str{
	ll a;
	char c;
};
str ar[200005];
ll cnt=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
//	bool jo=0;//0偶数 1奇数 
	bool pd=0;
	for(int i=1;i<=n;++i){
		cin>>ar[i].a>>ar[i].c;
		//特判
		if(ar[1].c!=ar[i].c){
			pd=1;
		} 
		/*
		//判断奇数偶数 
		if((jo==0&&(ar[i].a%2==0))||(jo==1&&(ar[i].a%2==1))){
			jo=0;
		}else{
			jo=1;
		}
		*/
	}
	/*
	for(int i=1;i<=n;++i){
		cout<<ar[i].a<<" "<<ar[i].c<<'\n';
	}
	*/
	if(pd==0){
		cout<<0<<'\n';
		return 0;
	}
	int l=1,r=n;
	int step=0;
	while(l<r){
		if(ar[l].c==ar[r].c){
			if(ar[l].a==ar[r].a){
				l++;
				r--;
//				step++;
//				cout<<step<<":同1 "<<l<<" "<<r<<" "<<ar[l].a<<" "<<ar[r].a<<" "<<cnt<<'\n';
			}
			if(ar[l].a<ar[r].a){
				ar[r].a-=ar[l].a;
				l++;
//				step++;
//				cout<<step<<":同< "<<l<<" "<<r<<" "<<ar[l].a<<" "<<ar[r].a<<" "<<cnt<<'\n';
			}
			if(ar[l].a>ar[r].a){
				ar[l].a-=ar[r].a;
				r--;
//				step++;
//				cout<<step<<":同> "<<l<<" "<<r<<" "<<ar[l].a<<" "<<ar[r].a<<" "<<cnt<<'\n';
			}
		}
		if(ar[l].c!=ar[r].c){
			if(ar[l].a==ar[r].a){
				cnt+=ar[l].a;
				l++;
				r--;
//				step++;
//				cout<<step<<":异1 "<<l<<" "<<r<<" "<<ar[l].a<<" "<<ar[r].a<<" "<<cnt<<'\n';
			}
			if(ar[l].a<ar[r].a){
				cnt+=ar[l].a;
				ar[r].a-=ar[l].a;//
				l++;
//				step++;
//				cout<<step<<":异< "<<l<<" "<<r<<" "<<ar[l].a<<" "<<ar[r].a<<" "<<cnt<<'\n';
			}
			if(ar[l].a>ar[r].a){
				cnt+=ar[r].a;
				ar[l].a-=ar[r].a;//
				r--;
//				step++;
//				cout<<step<<":异> "<<l<<" "<<r<<" "<<ar[l].a<<" "<<ar[r].a<<" "<<cnt<<'\n';
			}
		}
	}
	
/*
	if(jo==1){
		fd1(1,n);
	}
*/
	cout<<cnt<<'\n';
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*
while(l<=r){
		int chaz=0,chay=0;
		if(ar[l].c==ar[r].c){
			if(ar[l].a==ar[r].a){
				l++;
				r--;
			}
			if(ar[l].a<ar[r].a){
				cnt+=ar[l].a;
				l++;
			}
			if(ar[l].a>ar[r].a){
				cnt+=ar[r].a;
				r--;
			}
		}
		if(ar[l].c!=ar[r].c){
			if(ar[l].a-chaz==ar[r].a-chay){
				cnt+=ar[l].a;
				l++;
				r--;
			}
			if(ar[l].a-chaz<ar[r].a-chay){
				cnt+=ar[l].a;
				l++;
				chay+=ar[l].a;//
			}
			if(ar[l].a-chaz>ar[r].a-chay){
				cnt+=ar[r].a;
				r--;
				chaz+=ar[r].a;//
			}
		}
	}
*/
