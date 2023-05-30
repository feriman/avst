#include <cstdio>

class D
{
public:
	D();
	D(const D& d);
	D& operator=(const D& d);

	int Get();

private:
	int value;
};

D::D() : value(0)
{
}

D::D(const D& d) : value(1)
{
}

D& D::operator=(const D& d)
{
	value = 2;
	return *this;
}

int D::Get()
{
	return value;
}

int main()
{
	D x;
	D y(x);
	D z;
	z = y;
	printf("%d %d %d\n", x.Get(), y.Get(), z.Get());
	return 0;
}

