/*
#include <iostream>
int main() {

	int N = 0;
	std::cin >> N;

	for (int i = 1; i <= N; i++) {

		for (int j = N - i; j > 0; j--) {
			std::cout << " ";
		}

		for (int j = 2 * i - 1; j > 0; j--) {
			std::cout << "*";
		}
		std::cout << "\n";
	}

	for (int i = 1; i < N; i++) {

		for (int j = 0; j < i; j++) {
			std::cout << " ";
		}

		for (int j = 2 * (N - i) - 1; j > 0; j--) {
			std::cout << "*";
		}
		std::cout << "\n";
	}
	return 0;
}
*/