#ifndef POST_H
#define POST_H
using namespace std;

class Post
{
private:
	int k;
public:
	Post();
	~Post();
	int getNum();
	void setNum(int);
	Post operator++();
	Post operator++(int);
	friend istream &operator >> (istream &is, Post &);
	friend ostream &operator<<(ostream &os, const Post &);

};

#endif