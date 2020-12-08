//
// Created by casubmar on 08.12.2020.
//

#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP
#include <vector>
#include <algorithm>

class span {

public:
	span(unsigned int n);
	span(span const& src);
	span& operator=(span const& rhs);
	~span();

	int shortestSpan() const;
	int longestSpan() const;
private:
	std::vector<int>*	_nums;
	unsigned int 		_lastEl;
	unsigned int 		_maxSize;
	span();
};


#endif //EX01_SPAN_HPP
