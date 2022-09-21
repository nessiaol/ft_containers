#include "../includes/MyVector.hpp"
#include <vector>

int	main()
{
	Vector1<int>		vec;		//costruisce vettore vuoto
	Vector1<char *>		vec_str;	//costruisce vettore vuoto di stringhe
	Vector1<std::string> words1(5);	//costruisce vettore di 5 stringhe
	Vector1<int>		vec2(5);	//costruisce vettore di 5 int
	// Vector1<int>		vec_neg(-2);	//test costruzione vettore con size


	//std::cout << "fine programma" << std::endl;
}