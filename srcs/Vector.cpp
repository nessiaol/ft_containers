#include "../includes/MyVector.hpp"

Vector1::~Vector1( void )
	{
		//std::allocator.deallocate(_array);
		// std::allocator.deallocate(->this);
		//if (Vector1::verbose)
			std::cout << "Distruttore chiamato" << std::endl;
	}