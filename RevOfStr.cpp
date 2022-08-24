#include <iostream>
using namespace std;

void rev(string &str, int s){
	int e = str.length() - 1 - s;
	if(s > e) return ;
	
	swap(str[s++], str[e]);
	
	rev(str,s);
}

int main(){
	string s = "abcdefg";
	rev(s,0);
	cout<<"\t"<<s;
	
	return 0;
}
