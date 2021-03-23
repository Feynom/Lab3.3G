#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab3.3G/Lab3.3G/Angle.h"
#include "../Lab3.3G/Lab3.3G/Angle.cpp"
#include "../Lab3.3G/Lab3.3G/Object.h"
#include "../Lab3.3G/Lab3.3G/Object.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33G
{
	TEST_CLASS(UnitTest33G)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Angle A(90, 0), B(180, 0);
			Assert::AreEqual(round(A.getSin()), 1.);
			Assert::AreEqual(round(B.getSin()), 0.);
		}
	};
}
