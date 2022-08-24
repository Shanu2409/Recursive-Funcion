#include <iostream>
using namespace std;

bool palindrome(string &str, int s){
	int e = str.length() - 1 - s;
	
	if(s>=e) return 1;
	
	if(str[s++] == str[e]) return palindrome(str, s);
	else return false;
}

int main(){
	string s = "hhsabbashh";
	
	cout<<palindrome(s,0);
	
	return 0;
}
