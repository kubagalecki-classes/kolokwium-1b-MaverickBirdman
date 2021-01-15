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
	v[0] = Artysta(s, 1);
	v[1] = Artysta(s, 2);
	v[2] = Artysta(s, 3);
}
