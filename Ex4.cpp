#include <iostream>
void countLetters(const char* str, int& numLetters, int& numDigits, int& numOther)
{
	int ssize = 0;
	numLetters = 0;
	numDigits = 0;
	numOther = 0;
	int asci = 0;
	while(str[ssize] != '\0') ssize++;
	for (int i = 0;i < ssize; i++)
	{
		asci = int(str[i]);
		if ((asci >= 65 && asci <= 90) || (asci >= 97 && asci <= 122))
			numLetters++;
		if (asci >= 48 && asci <= 57)
			numDigits++;		
		if ((asci <= 47) || (asci >= 58 && asci <= 64) || (asci >= 123))
			numOther++;
	}
}

int main()
{
	const char* str = "3f7b... ";
	int numletters = 0;
	int numdigits = 0;
	int numother = 0;
	countLetters(str, numletters,numdigits,numother);
	std::cout << "letters: "<< numletters << "\ndigits: " << numdigits << "\nother: " << numother << std::endl;
}



















