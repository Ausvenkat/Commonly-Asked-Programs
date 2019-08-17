#include <iostream>
#include<string>
using namespace std;

int main() {
	string s,temp;
	cin>>s;
	int count=0,i,j;
	for(i=0;i<=s.length();i++){
		for(j=i+1;j<s.length();j++){
			if(s[i]==s[j]){
				cout<<s[i];
			}
		}
	}
	

	return 0;
}
