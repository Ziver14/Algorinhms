#include<iostream>

#include <vector>
#include<set>
#include<algorithm>

int main() {

	std::vector<int> collection(10);
	std::vector<int> collection2(10);

	for (auto &i : collection) {
		std::cout << i << ' ';
	}
	std::cout << '\n';

	std::for_each(collection.begin() , collection.end() , [](int& a)->void {static int i{ 1 }; a = i++; });


	for (auto& i : collection) {
		std::cout << i << ' ';
	}
	std::cout << '\n';

	std::for_each(collection2.begin(), collection2.end(), [](int& a)->void {static int i{ 1 }; a = i++; });
	for (auto& i : collection2) {
		std::cout << i << ' ';
	}

	std::cout << '\n';

	if(std::equal(collection2.begin(), collection2.end(),
		collection.begin(), collection.end())) {
		std::cout << "equal collecthion\n";
	}
	else {
		std::cout << "not equal collecthion\n";
	}

		std::vector<int> evens;

		std::copy_if(collection2.begin(), collection2.end(),
			std::back_inserter(evens),

			[](const int& a)->bool {return a % 2 == 0; });
	
		for (auto& i : evens) {
			std::cout << i << ' ';
		}

	
	
	return 0;
}