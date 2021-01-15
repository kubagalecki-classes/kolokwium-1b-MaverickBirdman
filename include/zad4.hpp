#include "zad1.hpp"

#include <exception>
#include <vector>

// tutaj funkcja stworzZespol
vector<Artysta> stworzZespol(int a, const std::string& s)
{
	if (s.size() != a)
	{
		throw std::logic_error("abc");
}
	else
	{
	vector<Artysta> v;
	for (int i = 0; i < a; i++)
	{
		v.push_back(Artysta(s, i + 1));
	}
	return v;
}
}
