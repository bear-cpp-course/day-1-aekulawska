#include <iostream>
#include <cctype>

int main (){
std::cout << "Input desired characters. When you wish to stop input 'q'" << std::endl;
char in_char;
std::string input{""};
std::string discard{""};

while(std::cin >> in_char && in_char != 'q')

{
	//Check if alpha and conver to uppercase

	if(isalpha(in_char)) {
	in_char=toupper(in_char);
	input = input + in_char;}

	else {
	discard = discard + in_char;}
	

	//Change number to word

	switch(in_char)
	{case '1':
	input = input + "ONE";
	break;

	case '2':
	input = input + "TWO";
	break;

	case '3': 
	input = input + "THREE";
	break;

	case '4':
	input = input + "FOUR";
	break;

	case '5':
	input = input + "FIVE";
	break;

	case '6':
	input = input + "SIX";
	break;

	case '7':
	input = input + "SEVEN";
	break;

	case '8':
	input = input + "EIGHT";
	break;

	case '9':
	input = input + "NINE";
	break;

	default:
	break;

}

}

	// Print

	std::cout << input << std::endl;
}
