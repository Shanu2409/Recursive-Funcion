#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

string dial(int key){
    string m[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    return m[key];
}
void pK(int num,string out){
    
    if(num==0){
        cout<<out<<endl;
        return;
    }
    string pd=dial(num%10);
    for(int i=0;i<pd.size();i++){
        pK(num/10,pd[i]+out);
    }
}

void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    pK(num,"");
    
}

// #include <iostream>
// #include <string>
// #include "solution.h"
// using namespace std;

int main(){
    
    int num = 23;
    // cin >> num;

    printKeypad(num);

    return 0;
}