#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_4.1_/List.h"
#include "../Lab_4.1_/List.cpp"
#include "../Lab_4.1_/Linear_list.h"
#include "../Lab_4.1_/Linear_list.cpp"
#include "../Lab_4.1_/Ring_list.h"
#include "../Lab_4.1_/Ring_list.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest41
{
	TEST_CLASS(UnitTest41)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Linear_list B (1, 4);
			Assert::AreEqual(B.Count(), (unsigned int) 1);
		}
	};
}
