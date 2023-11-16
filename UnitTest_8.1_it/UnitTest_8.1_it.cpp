#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_08.1.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81it
{
	TEST_CLASS(UnitTest81it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int arraySize = 101;
			char str[arraySize]{"one+two+min-e="};


			int pCount = countSymbolsPlus(str);

			Assert::AreEqual(pCount, 2);

		}
	};
}
