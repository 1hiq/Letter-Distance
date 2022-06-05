#include <iostream>
using namespace std;



double absoluteValue(double num) {
	if (num >= 0) {
		return num;
	}
	else if (num < 0) {
		return num * -1;
	}
}

int getStringLenght(string string) {
	int i = 0;
	while (string[i] != NULL) {
		i++;
	}

	return i;
}

int calcDistanceBetween2Chars(char first, char second) {
	return absoluteValue(first - second);
}



int sumOfLettersDistance(string first, string second) {
	int sum = 0;
	for (int i = 0; i < getStringLenght(first) && i < getStringLenght(second); i++) {
		sum += calcDistanceBetween2Chars(first[i], second[i]);
	}

	if (getStringLenght(first) != getStringLenght(second)) {
		sum += absoluteValue(calcDistanceBetween2Chars(getStringLenght(first), getStringLenght(second)));
	}

	return sum;
}



int main(void) {

	// For example: here the sum of distances between every letter in "abcde" and "bcdef" in ASCII is 5.
  // the absolute value of the distance between first letter in "abcde" and the first letter in "bcdef" + the second letter in "abcde" and the second letter in "bcdef" etc.
	cout << sumOfLettersDistance("abcde", "bcdef") << endl;
	

	
	
	return 0;
}
