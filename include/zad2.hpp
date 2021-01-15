#pragma once

#include "zad1.hpp"

#include <cctype>

// tutaj klasy PopGwiazda, RapGwiazda oraz funkcja stworzArtyste
using namespace std;

class Artysta	//podaj nazwe klasy
{
public:
	Artysta():pseudonim("Anonim"), mls(0) {}
	Artysta(const string& a, unsigned b) :pseudonim(a), mls(b) {}
	virtual void graj(std::ostream& stream) const 
	{
		stream << pseudonim<<": "<<mls;
	}
	const string& getPseudonim(std::ostream& o) const { return pseudonim; }
	unsigned getSluchacze() const { return mls; }
private:
	string pseudonim;
	unsigned mls;	//miesieczna liczba sluchaczy
};


class PopGwiazda :public Artysta
{
public:
	PopGwiazda(const std::string& s, const unsigned& u) :pseudonim(s), mls(u) {}
	virtual void graj(std::ostream& stream) const override 
	{
	
	}
private:
	string pseudonim;
	unsigned mls;	//miesieczna liczba sluchaczy
};

class RapGwiazda :public Artysta
{
public:
	RapGwiazda(const std::string& s, const unsigned& u) : pseudonim(s), mls(u) {}
	virtual void graj(std::ostream& stream) const override 
	{
	
	}
private:
	string pseudonim;
	unsigned mls;	//miesieczna liczba sluchaczy
};
