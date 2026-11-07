#include<bits/stdc++.h>
using namespace std;
struct str{
	long long start_index;
	long long len_chars;
	char c;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	//init&input
	int n;
	cin>>n;
	vector<str> chars;
	long long len=0;
	for(int i=0;i<n;i++){
		long long a;
		char b;
		cin>>a>>b;
		chars.push_back({len,a,b});
		len+=a;
	}
	long long mid=len/2;
	
	
	//分割成两半
	vector<str> l_chars;
	vector<str> r_chars;
	long long current_index=0;
	int sec_index=0;
	
	//左半边 
	while(current_index<mid){
		str temp_str;
		temp_str.c=chars[sec_index].c;
		temp_str.start_index=chars[sec_index].start_index;
		if(chars[sec_index].len_chars+current_index>=mid){
			temp_str.len_chars = mid-temp_str.start_index;
		}else{
			temp_str.len_chars = chars[sec_index].len_chars;
			sec_index++;
		}
		l_chars.push_back(temp_str);
		current_index+=temp_str.len_chars;
	}
	
	//右半边 
	while(sec_index<n){
		str temp_str;
		temp_str.c=chars[sec_index].c;
		if(current_index==mid){
			temp_str.start_index=mid;
			temp_str.len_chars=chars[sec_index].start_index+chars[sec_index].len_chars-mid;
		}else{
			temp_str.start_index=chars[sec_index].start_index;
			temp_str.len_chars=chars[sec_index].len_chars;
		}
		sec_index++;
		current_index+=temp_str.len_chars;
		r_chars.push_back(temp_str);
	}
	reverse(r_chars.begin(),r_chars.end());
	
	
	//复写r_chars的起点索引 
	long long temp_index=0;
	for(int i=0;i<r_chars.size();i++){
		r_chars[i].start_index=temp_index;
		temp_index+=r_chars[i].len_chars;
	}
	
//	for(auto a:l_chars){
//		cout<<a.start_index<<" ";
//	}cout<<endl;
//	for(auto a:r_chars){
//		cout<<a.start_index<<" ";
//	}cout<<endl;
	
	//比对两个vector，并处理结果
	long long result=0;
	
	int sec_1=0;
	long long cur_sec1_st=0,cur_sec1_ed;
	
	int sec_2=0;
	long long cur_sec2_st=0,cur_sec2_ed;
	
	for(;sec_1<l_chars.size();sec_1++){
		cur_sec1_st=l_chars[sec_1].start_index;
		cur_sec1_ed=cur_sec1_st+l_chars[sec_1].len_chars;
		cur_sec2_ed=r_chars[sec_2].start_index+r_chars[sec_2].len_chars;
//		cout<<cur_sec1_st<<" "<<cur_sec1_ed<<" "<<cur_sec2_st<<" "<<cur_sec2_ed<<endl;
		while(cur_sec2_ed<cur_sec1_ed){
			if(l_chars[sec_1].c!=r_chars[sec_2].c){
				result+=cur_sec2_ed-cur_sec2_st;
			}
			sec_2++;
			cur_sec2_st=r_chars[sec_2].start_index;
			cur_sec2_ed=cur_sec2_st+r_chars[sec_2].len_chars;
//			cout<<result<<" "<<cur_sec2_st<<" "<<cur_sec2_ed<<endl;
		}
		if(cur_sec1_ed==cur_sec2_ed){
			if(l_chars[sec_1].c!=r_chars[sec_2].c){
				result+=cur_sec2_ed-cur_sec2_st;
			}
			sec_2++;
			cur_sec2_st=cur_sec2_ed;
		}else{
			if(l_chars[sec_1].c!=r_chars[sec_2].c){
				result+=cur_sec1_ed-cur_sec2_st;
			}
			cur_sec2_st=cur_sec1_ed;
		}
	}
	
	cout<<result;
	return 0;
}
