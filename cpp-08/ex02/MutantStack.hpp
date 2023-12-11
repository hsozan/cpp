#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>
#include <iterator>
#include "Colours.hpp"

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef	T*	iterator;
		typedef	T const *	const_iterator;

		iterator begin()
		{
			std::vector<T>	v;
			T				top;
			iterator		ret;
			int				n = 0;
			while (!this->empty())
			{
				top = this->top();
				v.push_back(top);
				this->pop();
				n++;
			}
			this->push(v[n - 1]);
			n--;
			ret = &(this->top());
			while (n--)
				this->push(v[n]);
			return (ret);
		}
		//begin() returns an iterator to the top of the stack
		//but it also reverses the stack
		//so that the top of the stack is the first element of the vector
		//and the bottom of the stack is the last element of the vector
		//so that the iterator can be used to iterate through the stack
		//from top to bottom
	
		iterator end() { return (&this->top() + 1); }//we add 1 to the address of the top of the stack to get the address of the bottom of the stack
};

#endif