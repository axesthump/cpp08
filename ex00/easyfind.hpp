//
// Created by casubmar on 07.12.2020.
//

#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& container, int item) {
	return std::find(container.begin(), container.end(), item);
}

#endif //EX00_EASYFIND_HPP
