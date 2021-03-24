#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_9_1_2/lab_9_1_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Student* f = new Student[1];
			f->mat = 5;
			f->fiz = 5;
			Assert::AreEqual(Search(f, 1), 1);
		}

		TEST_METHOD(TestMethod2)
		{
			Student* f = new Student[1];
			f->mat = 0;
			f->fiz = 5;
			Assert::AreEqual(Search(f, 1), 0);
		}
	};
}
