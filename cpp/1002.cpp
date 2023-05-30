#include <cstdio>

class B
{
public:
	B(int val);
	B& operator+=(const B& rhs);
	int Get() const;

private:
	int value;
};

B::B(int val) : value(val)
{
}

B& B::operator+=(const B& rhs)
{
	value += rhs.value;
	return *this;
}

int B::Get() const
{
	return value;
}

int main()
{
	B first(1), second = 2;
	first += 10; second += 1000;
	printf("%d %d\n", first.Get(), second.Get());
	return 0;
}

