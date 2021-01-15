#include "zad1.hpp"

#include <exception>
#include <vector>

// tutaj funkcja stworzZespol
vector<Artysta> stworzZespol(int a, const std::string& s)
{
	vector<Artysta> v(a);
	if (s.size() != a)
	{
		std::logic_error("abc");
	}
	else
	{ 
	for (int i = 0; i < v.size(); i++)
	{
		v[i] = Artysta(s, i + 1);
	}
	return v;
	}
}
