#pragma once
#include "IElement.hpp"

#include <iostream>

struct Doer : IElement
{
	void accept(IVisitor *v)
	{
		v->visit(this);
	}

	void doSomething()
	{
		std::cout << "[DOER] Doing something" << std::endl;
	}
};