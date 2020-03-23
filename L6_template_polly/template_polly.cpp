#include <iostream>

using namespace std;

template <class T>
class A
{
public:
	A(T x1):x(x1){}
	virtual void print() = 0;
	virtual ~A(){}
protected:
	T x;
};
template <class T>
class B :public A<T>
{
public:
	T y;
	B(T x,T y1):A<T>(x),y(y1){}
	void print()
	{
		cout << "x=" <<A<T>::x<<",y="<<y<< endl;
	}
};
int main()
{
	A<int>* p = new B<int>(3, 4);
	p->print();
	delete(p);
}