#include <iostream>
#include "List.hpp"
#include "Doer.hpp"
#include "Thinker.hpp"
#include "Writer.hpp"
#include "GuestVisitor.hpp"

int main()
{
	std::cout << "Hello in the visitor pattern example in C++" << std::endl;
	List<IElement *> objects(2);

	objects.add(new Doer);
	objects.add(new Thinker);
	objects.add(new Writer);
	objects.add(new Doer);

	auto visitor = new GuestVisitor;

	std::cout << "The GuestVisitor will now visit each object" << std::endl;
	for (auto object : objects)
		object->accept(visitor);
}
