#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	vector< pair<long long,char> > a;
	int n;
	long long s=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		char y;
		cin>>x>>y;
		a.push_back({x,y});
		s+=x;
	}
	long long l_max,r_max=s-1,l=0,r;
	if(s%2==0){
		l_max=s/2-1;
		r=l_max+2;
	}else{
		l_max=s/2;
		r=s/2;
	}
	s=0;
	long long x=0,y;
	for(int i=0;i<n;i++){
		s+=a[i].first;
		if(s>=r){
			y=i;
			break;
		}
	}
	long long answer=0;
	long long last_x=a[x].first,last_y=a[y].first;
	while(l<=l_max && r<=r_max){
		last_x=a[x].first,last_y=a[y].first;
		char p=a[x].second,q=a[y].second;
		if(p!=q){
			answer+=min(last_x,last_y);
		}
		if(last_x<last_y){
			l+=last_x;
			r+=last_x;
			last_y-=last_x;
			last_x=0;
			x++;
		}else if(last_x>last_y){
			l+=last_y;
			r+=last_y;
			last_x-=last_y;
			last_y=0;
			y++;
		}else if(last_x==last_y){
			l+=last_x;
			r+=last_x;
			last_y=0;
			last_x=0;
			x++;
			y++;
		}
	}
	cout<<answer;
	return 0;
}