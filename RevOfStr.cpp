#include <iostream>
using namespace std;

void rev(string &str, int s, int e){
	if(s > e) return ;
	
	swap(str[s++], str[e--]);
	
	rev(str,s,e);
}

int main(){
	string s = "abcdefg";
	rev(s,0,s.length() - 1);
	cout<<"\t"<<s;
	
	return 0;
}
