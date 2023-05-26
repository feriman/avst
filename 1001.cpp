// Objects by class A behave as non-volatile arrays of integers
// each element of which is greater than its index by number
// `complement' given as constructor argument. Thus, function
// main should print:
//
//   first: 101 201
//   second: 110 210

#include <cstdio>

class A
{
public:
	A(int c);
	int operator[](std::size_t idx) const;

private:
	int complement;
};

A::A(int c)
: complement(c)
{
}

int A::operator[](std::size_t idx) const
{
	return idx + complement;
}

int main()
{
	A first = 1;
	A second(10);

	printf("first: %d %d\n", first[100], first[200]);
	printf("second: %d %d\n", second[100], second[200]);

	return 0;
}

