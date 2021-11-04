#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\marki\Desktop\Yaryna visual studio\laba6.2.1\laba6.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double n;
			n = n - 1;
			Assert::AreEqual(n, 1.0);
		}
	};
}
