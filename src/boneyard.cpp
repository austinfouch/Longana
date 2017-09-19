#include "boneyard.h"

using namespace std;

/*
**	Boneyard::Boneyard(const Boneyard &by)
**		Copy cstor.
*/
Boneyard::Boneyard(const Boneyard &by)
{
	this->tiles = by.tiles;
}

/*
**	Tile Boneyard::pop()
**		This function copies the top element of the member stack and returns
**		the value of the element after popping it from the stack.
** 
*/
void Boneyard::pop_back()
{
	this->tiles.pop_back();
}

/*
**	Tile& Boneyard::top()
**		Returns reference to the top element of the member stack.	
*/
Tile& Boneyard::back()
{
	return this->tiles.back();
}

/*
**	void Boneyard::push(const Tile &t)
**		This functions gives access to pushing elements onto the member stack.
*/
void Boneyard::push_back(const Tile &t)
{
	this->tiles.push_back(t);
}

/*
**	bool Boneyard::empty()
**		Returns true if the member stack is empty, false if not.
*/
bool Boneyard::empty()
{
	return this->tiles.empty();
}

/*
**	void Boneyard::operator=(const Boneyard &by)
**		Overloaded assignment operator.
*/
void Boneyard::operator=(const Boneyard &by)
{
	this->tiles = by.tiles;
}

ostream &operator<<(ostream& out, Boneyard &by)
{
	cout << "Boneyard: ";
	for(const auto &it : by)
		cout << it << " ";
	cout << "\n";
}