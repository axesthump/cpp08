#include <iostream>
#include "vector"
#include "easyfind.hpp"

int main() {
	std::vector<int> v(5);
	for (int i = 0; i < v.size(); ++i) {
		v[i] = i;
	}
	if (::easyfind(v, 5) == v.end()) {
		std::cout << "Not here...\n";
	}
	std::vector<int>::iterator iter = ::easyfind(v, 4);
	if (iter != v.end()) {
		std::cout << "Yep, im found - " << *iter << std::endl;
	}
	return 0;
}
