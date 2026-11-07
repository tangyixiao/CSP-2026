#include<bits/stdc++.h>
using namespace std;

struct stu {
	long long int x;
	char y;
} student[100005];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long int a;
	cin>>a;

	
	int size=0;
	for(int i=0; i<a; i++) {
		cin>>student[i].x>>student[i].y;
		size+=1;
	}

	long long int ans=0;
	int left=0,right=size-1;
	
	while(right-left>0) {
//		cout<<"left:"<<left<<" "<<"right:"<<right<<endl;
//		for(int j=left;j<=right;j++)
//		{
//			cout<<student[j].x<<" "<<student[j].y<<endl;
//		}
//		cout<<"ans:"<<ans;
//		cout<<endl;
		if(student[left].y!=student[right].y) {
			if(student[left].x==student[right].x) {
				ans+=student[right].x;
				left+=1;
				right-=1;
			}
			if(student[left].x>student[right].x) {
				ans+=student[right].x;
				student[left].x-=student[right].x;
				right-=1;
			}
			if(student[left].x<student[right].x) {
				ans+=student[left].x;
				student[right].x-=student[left].x;
				left+=1;
			}
		} else {
		
			if(student[left].x!=student[right].x) {
				if(student[left].x==student[right].x) {
					
					left+=1;
					right-=1;
				}
				if(student[left].x>student[right].x) {
					
					student[left].x-=student[right].x;
					right-=1;
				}
				if(student[left].x<student[right].x) {
					
					student[right].x-=student[left].x;
					left+=1;
				}
			}
		}
		
		

	}
	cout<<ans;
	return 0;
}
