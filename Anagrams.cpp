#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1,str2;
	int len,len1,len2,i,j,found=0,not_found=0;
	cin>>str1>>str2;
	len1=str1.length();
	len2=str2.length();
	if(len1==len2)
	{
		len=len1;
		for(i=0;i<len;i++)
		{
			found=0;
			for(j=0;j<len;j++)
			{
				if(str1[i]==str2[j])
				{
					found=1;
					break;
				}
			}
			if(found==0)
			{
				not_found=1;
				break;
			}
		}
		if(not_found==1)
		{
			cout<<"Strings are not Anagram to each other";
		}
		else
		{
			cout<<"Strings are Anagram";
		}
	}
	else
	{
		cout<<"Two string must have same number of character to be Anagram";
	}
	return 0;
}
