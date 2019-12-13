#pragma once

struct Doer;
struct Thinker;
struct Writer;

struct IVisitor
{
	virtual ~IVisitor() {}

	virtual void visit(Doer *) = 0;
	virtual void visit(Thinker *) = 0;
	virtual void visit(Writer *) = 0;
};
