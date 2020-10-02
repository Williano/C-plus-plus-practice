#include <iostream>


const int MIN_WIDTH = 3;
const int MAX_WIDTH = 15;

int calculateHammingDistance(int& n1, int& n2)
{
	int num = n1 ^ n2;
	int changedBits = 0;

	while (num > 0) {
		changedBits += num & 1;
		num >>= 1;
	}

	return changedBits;
}

int CodewordsCount(int& bitWidth, int& k) {
	int dictSize = 1;

	for (int i = 0; i < bitWidth; i++)
		dictSize *= 2;

	int* codewords = (int*)malloc(sizeof(int) * dictSize);
	bool* codeWordsValid = (bool*)malloc(sizeof(bool) * dictSize);


	for (int i = 0; i < dictSize; i++) {
		codewords[i] = i;
		codeWordsValid[i] = true;
	}

	bool lesserHDFound = true;
	int currentElement = 0;
	while (lesserHDFound) {
		int nextElement = currentElement;
		lesserHDFound = false;
		for (int i = currentElement + 1; i < dictSize; i++) {
			int hd = calculateHammingDistance(codewords[i], codewords[currentElement]);

			if (codeWordsValid[i] == true) {
				if ((hd % k) < k && (hd % k) != 0) {
					codeWordsValid[i] = false;
					lesserHDFound = true;
				}
				else if (nextElement == currentElement) {
					nextElement = i;
				}
			}
		}

		currentElement = nextElement;
	}
	int CodeWordCount = 0;
	for (int i = 0; i < dictSize; i++) {
		if (codeWordsValid[i]) {
			CodeWordCount++;
			int num = codewords[i];
			int zeros = bitWidth;
			while (zeros-- > 0) {
				num /= 2;
			}
		}
	}

	free(codewords);
	free(codeWordsValid);

	return CodeWordCount;
}

int main()
{
	int n;
	std::cout << "Enter max width " << std::endl;
	std::cin >> n;

	std::cout << " " << std::endl;

	if (n < MIN_WIDTH || n > MAX_WIDTH)
	{

		std::cout << "Only values between " << MIN_WIDTH << " and " << MAX_WIDTH << " is accepted" << std::endl;

		std::cout << "" << std::endl;
	}
	else
	{

		for (int i = 0; i < n + 1; i++)
		{
			if (i == 0)
			{

				std::cout << "K=" << i << std::endl;
			}

			else
			{

				std::cout << i << std::endl;
			}
		}

		std::cout << " " << std::endl;

		for (int m = 3; m <= n; m++)
		{
			std::cout << "n = " << m << std::endl;

			for (int i = 1; i <= m; i++)
			{
				std::cout << CodewordsCount(m, i) << std::endl;
			}
			std::cout << " " << std::endl;
		}

	}


	return 0;
}
