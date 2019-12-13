#pragma once
#include "Doer.hpp"
#include "Thinker.hpp"
#include "Writer.hpp"

struct GuestVisitor : IVisitor
{
	void visit(Doer *d)
	{
		d->doSomething();
	}
	void visit(Thinker *t)
	{
		t->thinkAbout("the GuestVisitor");
	}
	void visit(Writer *w)
	{
		w->WriteSomething();
	}
};
