#include <iostream>
#include <cstring>

#ifndef BUFFER_INCR
#define BUFFER_INCR 8
#endif

using namespace std;

char getWord(char *&word, unsigned int &buffer_size)
{
	//cout << "Buffer is a pointer to " << buffer << "The buffer is of size " << buffer_size << " bytes." << endl;
	char input;
	unsigned int i = 0;
	char *temp;

	//get a single character

	while (1)
	{
		cin >> input;

		switch (input)
		{
			case ' ':
			case ',':
			case '.':
			case '\n':  // white space character, close word with \0 and exit function
				word[i] = '\0';
				return input;
			default:
				break;
		}

		if (i > buffer_size)
		{
			temp = word;
			buffer_size = buffer_size + BUFFER_INCR;
			word = new char[buffer_size];
			memcpy(word, temp, i);
			delete[] temp;
		}
		word[i] = input;
		i++;
	}

}
