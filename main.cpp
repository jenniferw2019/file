#include <iostream>
#include <fstream>

using namespace std;

int main()
{

  char* bufferFirst;
  char* bufferLast;
  int lengthFirst;
  int lengthLast;
  
  
  ifstream firstname ("firstname.txt", ifstream::in);
    if (firstname)
      {
	firstname.seekg (0, firstname.end);
	lengthFirst = firstname.tellg();
	firstname.seekg (0, firstname.beg);

	bufferFirst = new char[lengthFirst];

	firstname.read(bufferFirst, lengthFirst);

	cout << bufferFirst << endl;
	firstname.close();
	delete[] bufferFirst;
      }

    ifstream lastname ("lastname.txt", ifstream::in);
    if (lastname)
      {
	lastname.seekg (0, lastname.end);
	lengthLast = lastname.tellg();
	lastname.seekg (0, lastname.beg);

	bufferLast = new char[lengthLast];

	lastname.read(bufferLast, lengthLast);

	cout << bufferLast << endl;
	lastname.close();
	delete[] bufferLast;
      }
}
