#include <iostream>
#include <string>
#include "Post.h"
using namespace std;

Post::Post()
{
	k = 0;
}

Post::~Post()
{
}

int Post::getNum()
{
	return k;
}

void Post::setNum(int j)
{
	k = j;
}

Post Post:: operator++()
{
	k++;
	Post temp;
	temp.k = k;
	return temp;
}

Post Post:: operator++(int)
{
	Post temp;
	temp.k = k;
	k++;
	return temp;
}



istream &operator >>(istream &is, Post &h)
{
	is >> h.k;
	return is;
}

ostream &operator << (ostream &os, const Post &h)
{
	os << h.k;
	return os;
}