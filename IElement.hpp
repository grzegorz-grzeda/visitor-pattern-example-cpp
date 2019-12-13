#pragma once
#include "IVisitor.hpp"

struct IElement
{
	virtual ~IElement() {}

	virtual void accept(IVisitor *v) = 0;
};
