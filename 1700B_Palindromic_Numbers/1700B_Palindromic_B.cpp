#include <iostream>
#include <cmath>
#include<string>
#include<string.h>
#include <bits/stdc++.h>
#include<cstring>

using namespace std;
void to_eleven(char numb, int carry);

void to_eleven(char numb, int carry, int arr[]) {
	int number = (int)numb-'0';	
	int value = 0;
	
	if(number >= 1){
		if(carry == 0){
			value = 11 - number;
			carry = 1;
			
			
		}
		else if (carry == 1){
			value = 10 - number;
			carry = 1;
		
		}
	
	}
	else {
		if(carry == 1){
			value = 0;
			carry = 0;
		}
		else{
			value = 1 - number;
			carry = 0;
		}
	}
//	cout << "Number = " << number << " Value = " << value << " carry = " << carry << endl;
	if (value == 10){
		value = 0;
		carry = 0;
	}
//	value = (value == 10) ? 0: value;
	arr[0] = value;
	arr[1] = carry;
	
}

int to_nine(char numb){
	int number = (int)numb - '0';
	int value = 9 - number ;
	return value;
}


int main(){

int nu;
cin >> nu;


for(int a = 0; a<nu; a++)
{	
	int n=0;
	int carry = 0;
	int arr[2];
	cin >> n;
	string str;
	cin >> str;
	char ret[n];
	string res[n];
	
if( str[0] == '9'){
	int character;
	char numbchar;
//	cout << "\n Getting number"	<< str;
	for(int i = n-1; i >=0; i--){

	character = 0;

	to_eleven(str[i], carry, arr);
	character = arr[0];
	carry = arr[1];
	numbchar = character + '0';
	
//	cout << "Value = " << character << " character " << numbchar << endl;
	ret[i] = numbchar;
	res[i] = numbchar;
	
	
	
 	//cout <<  "Char Static"<<static_cast<char>(character) <<endl;
//	cout << res[i];
	}
//	character = 0;
//	to_eleven(str[n-1], carry, arr);
//	character = arr[0];
//	carry = arr[1];
//	numbchar = character + '0';
////	cout << "Last char = " << numbchar;
//	ret[n-1] = numbchar;
//	res[n-1] = numbchar;
//	cout << res[n-1];
	
	
	
	
	
	
//	character = 0;
//	character = to_eleven(str[n]);
//	ret[n] = character + '0';
//	cout << ret[n];
//	cout << endl <<"------" << endl;
	
//	strrev(res);
	
//	cout << res;
	
	for(int i = 0; i < n; i++){
		cout << res[i];
	}
	cout << endl;
}



else if(str[0] != '9'){
	int character = 0;
	for(int i=0; i < n; i++){
	character = to_nine(str[i]);
	ret[i] = character + '0';
	cout << ret[i];
//	cout << "Reps nine "<<i << " -- "<<ret[i] << endl;

	}
}
cout << endl;

//cout << ret << endl;
str.clear();
memset(ret,0,sizeof ret);
}






return 0;
}

