#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_9_1_1/lab_9_1_1.cpp"

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
			f->spec = KN;
			f->prog = 5;
			Assert::AreEqual(Search(f, 1), 3);
		}

		TEST_METHOD(TestMethod2)
		{
			Student* f = new Student[1];
			f->mat = 0;
			f->fiz = 5;
			f->spec = TN;
			f->pedagog = 5;
			Assert::AreEqual(Search(f, 1), 2);
		}

		TEST_METHOD(TestMethod3)
		{
			Student* f = new Student[1];
			f->mat = 0;
			f->fiz = 0;
			f->spec = IF;
			f->chis_metod = 5;
			Assert::AreEqual(Search(f, 1), 1);
		}
	};
}
