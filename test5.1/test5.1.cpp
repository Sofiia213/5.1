#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test51
{
	TEST_CLASS(test51)
	{
	public:
		
		TEST_METHOD(TestMethod1);
	};
	inline void test51::TestMethod1()
	{
		double h;
		h = g(1.,0.,0.);
		Assert::AreEqual(h, 1.);

	}
}
