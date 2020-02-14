#include <iostream>
#include <cctype>
#include <vector>

//Transform function stored here
std::string transformChar(const char in_char) {
std::string input;
std::string discard;
	
	
	//Check if alpha and conver to uppercase

	if(isalpha(in_char)) {
	char upper_char {toupper(in_char)};
	input = input + upper_char;}

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
	return input;};


int main (int argc, char* argv[]) 
{

	//Checking arguments etc
	const std::vector<std::string> cmdLineArgs{argv, argv+argc};
	for(size_t i{0}; i < cmdLineArgs.size(); i++) {
	std::cout << "Index: " << i << " " << cmdLineArgs[i] <<std::endl; 
	}


//Function transform
std::cout << "Input desired characters. When you wish to stop input 'q'" << std::endl;
char new_char;
std::string text;

while(std::cin >> new_char && new_char != 'q')

{
	text += transformChar(new_char);
	// the above code is the same as text = text + input;

}


	// Print

	std::cout << text << std::endl;
}


