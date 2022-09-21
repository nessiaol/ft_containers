#ifndef MYVECTOR_HPP
# define MYVECTOR_HPP

# include <iostream>
# include <memory>		//libreria di allocator
# include <string>		

template<typename T>
class Vector1
{

public:

	Vector1<T>( void ): _size(0), _array(NULL)
	{
		std::allocator<T> alloc;
		this->_array = alloc.allocate(_size);

		std::cout << "Costruttore: Vettore vuoto creato" << std::endl;
		return;
	}
	Vector1<T>( const unsigned int size ): _size(size)
	{
		std::allocator<T> alloc;
		this->_array = alloc.allocate(_size);
			
		//if (Vector1::verbose)
			std::cout << "Costruttore: Vettore di " << size << " elementi creato" << std::endl;
	}
	Vector1<T>( const Vector1<T> &src ) { *this = src; }
	~Vector1( void )
	{
		//std::allocator.deallocate(_array);
		// std::allocator.deallocate(->this);
		//std::allocator.destruct
		//if (Vector1::verbose)
			std::cout << "Distruttore chiamato" << std::endl;
	}

	Vector1<T>	&operator=( const Vector1<T> &rhs ) {
		(void)rhs;
		return *this;
	}

	//static bool	verbose;	//se abilitato visualizza messaggi di debugging

private:

	int		_size;
	T		*_array;

};

#endif
