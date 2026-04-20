//----------------------------------------------------------
// CS161 Assignment Starter Code
// Copyright Andrew Scholer (ascholer@chemeketa.edu)
// Neither this code, nor any works derived from it
//    may be republished without approval.
//----------------------------------------------------------

// Bring in unit testing code and tell it to build a main function
// If you have multiple unit test files, only one should have this define
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

// Use Approx from doctest without saying doctest::Approx
using doctest::Approx;

//-----------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int getArea(int width, int height){
    return width * height;
}

double calculateAspectRatio(int width, int height, int border){
  double insidewidth = width - 2 * border;
  double insideheight = height - 2 * border;
  return insidewidth / insideheight;
}

int frameBorderArea(int width, int height, int border)
{
  int outsideArea = width * height;
  int insideWidth = width - 2 * border;
  int insideheight = height - 2 * border;
  int insiderArea = insideWidth * insideheight
}

///----------------------------------------------------------------------------------
/// Tests
/// Uncomment tests to work on them. Make sure any test that does not compile or
/// causes a crash gets commented back out. Any test that runs should be left
/// on (uncommented), even if the test fails.
///----------------------------------------------------------------------------------

TEST_CASE("getArea")
{
  cout << "1: getArea" << endl;
  CHECK(getArea(2, 4) == 8);
  CHECK(getArea(12, 7) == 84);
}

TEST_CASE("calculateAspectRatio")
{
  cout << "2: calculateAspectRatio" << endl;
  CHECK(calculateAspectRatio(4, 6, 1) == Approx(0.5));
  CHECK(calculateAspectRatio(12, 8, 2) == Approx(2.0));
}

TEST_CASE("frameBorderArea")
{
  cout << "3: frameBorderArea" << endl;
  CHECK(frameBorderArea(12, 10, 2) == 72);
  CHECK(frameBorderArea(20, 16, 3) == 180);
}

//TEST_CASE("getMaxBorder")
//{
//  cout << "4: getMaxBorder" << endl;
//  CHECK(getMaxBorder(5, 10) == 2);
//  CHECK(getMaxBorder(10, 5) == 2);
//  CHECK(getMaxBorder(12, 16) == 5);
//  CHECK(getMaxBorder(18, 16) == 7);
//}

// Add your own test case for hangingWireLength here

