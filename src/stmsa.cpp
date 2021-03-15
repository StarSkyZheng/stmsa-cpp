// stmsa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#ifdef _DEBUG

#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>

// the following two lines will make operator new tell crt where the leaked memory is allocated
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

#include "UnitTest/PairwiseAlignmentTester.hpp"
#include "UnitTest/SuffixTreeTester.hpp"

#endif


int main(int argc, char **argv)
{
#ifdef _DEBUG
    _CrtSetDbgFlag ( _CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF );

    // suffixtree::SuffixTreeTester::test();
    suffixtree::SuffixTreeTester::test_profile(argv[1], argv[2]);
    // pairwise_alignment::needleman_wunsh_test();
#endif
}
