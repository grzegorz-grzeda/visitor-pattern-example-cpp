#pragma once
#include "IElement.hpp"

#include <iostream>

struct Thinker : IElement
{
	void accept(IVisitor *v)
	{
		v->visit(this);
	}

	void thinkAbout(std::string thought)
	{
		std::cout << "[Thinker] Thinking about " << thought << std::endl;
	}
};