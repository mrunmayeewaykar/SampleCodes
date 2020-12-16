//============================================================================
// Name        : stringsfunc.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class strfunc{
	char s1[20];
	char s2[20];


public:
	void read();
	void lenght();
	void copy();
	void reverse(strfunc);
	void concat(strfunc);
	int compare(strfunc s1, strfunc s2);
	void palindrome(strfunc s1);
	void substring(strfunc s2);

};
void strfunc:: read(){
	cout<<"Enter string 1";
	cin>>s1;
	cout<<"Enter String 2";
	cin>>s2;
}
void strfunc:: lenght(){
	int l=0,i;

	for(i=0; s1[i]!='\0'; i++){
		l= l+1;
	}
	cout<<"\nLenght of string 1 is"<<l;

}
void strfunc:: copy(){
	char s3[20];

	int i;
	for( i=0; s1[i]!=0; i++){
		s3[i]= s1[i];
	}
	s3[i]= '\0';
	cout<<"\nCopied string is "<< s3;
}
void strfunc:: reverse(strfunc){
	int l=0,i,j;
char s4[20];
cout<<"Original String is "<< s1;

	for(i=0; s1[i]!='\0'; i++){
		l= l+1;
	}
	for(i=0; i<l; i++){
		for(j=l; j!= 0; j--){
			s4[j]= s1[i];

		}
	}
	s4[j]= '\0';
	cout<<"Reversed string is "<<s4;
}

int main() {
	char str[20];
	cout<<"Enter a String for reverse ";
	cin>>str;
	 strfunc obj;
	 strfunc str1;
	 strfunc str2;
	 obj.read();
	 obj.lenght();
	 obj.copy();
	 obj.reverse(strfunc str);





	return 0;
}
