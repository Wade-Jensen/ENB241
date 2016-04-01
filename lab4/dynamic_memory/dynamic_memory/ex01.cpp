#include "dynamic.h"
using namespace std;

//#define BUFFER_SIZE 64
//#define NUM_WORDS 5
#define INITIAL_BUFFER_SIZE 8
#define BUFFER_INCR 8

int main(int argc, char *argv[])
{
	char *buffer = new char[INITIAL_BUFFER_SIZE]; // temporary word storage
	unsigned int buffer_size = INITIAL_BUFFER_SIZE;
	unsigned int numWords = 0;
	char **words = NULL; //array of array of chars
	char **temp;
	unsigned int length = 0; // word length
	int i;
	char lastChar = '0';

	cin >> noskipws;
	
	// get words
	cout << "Enter words" << endl;
	while (1)
	{
		length = 0;
		while (length <= 1 && lastChar != '\n')
		{
			lastChar = getWord(buffer, buffer_size);
			length = strlen(buffer) + 1;
		}
		
		temp = words;
		words = new char*[numWords+1];
		memcpy(words, temp, numWords*sizeof(char *));
		if (temp) delete [] temp;
		

		words[numWords] = new char[length];
		memcpy(words[numWords], buffer, length); // this allows us to copy specific bytes of memory rather than lopping over each character, how wonderful!!
		
		if (lastChar == '\n')
		{
			break;
		}
		numWords++;
	}
	

	// print stored words
	cout << "\nWords entered:";
	for (i = 0; i < numWords; ++i)
	{
		cout << " \"" << words[i] << "\"";
	}
	cout << endl;

	// free allocated memory
	for (i = 0; i < numWords; ++i)
	{
		delete[] words[i]; // free each word
	}

	return 0;
}
