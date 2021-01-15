#include "zad1.hpp"

#include <algorithm>
#include <deque>
#include <vector>

// tutaj algorytm liczPopularnych(T begin, T end)
template <typename T>
int liczPopularnych(T ita, T itb)
{
	return count_if(ita, itb, [](Artysta a) {return a.getSluchacze() > 1000; });
}
