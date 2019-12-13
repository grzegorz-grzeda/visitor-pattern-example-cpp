#pragma once
#include "IElement.hpp"

#include <iostream>

struct Writer : IElement
{
	void accept(IVisitor *v)
	{
		v->visit(this);
	}

	void WriteSomething()
	{
		std::cout << "[WRITER] Blah, blah, blah... something" << std::endl;
	}
};
