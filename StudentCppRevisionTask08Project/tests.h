#pragma once
#pragma once
#include "tasks.h"

#define RIGHT " - completed successfully. Well DONE!!!"
#define WRONG " - was not running successfully. ERROR!"

void testingTask01() {
	bool result = task01(7, 7, 7, 7) == 4
		&& task01(7, 7, 7, 8) == 3
		&& task01(7, 7, 8, 9) == 2
		&& task01(6, 7, 8, 9) == 0
		&& task01(-7, -7, -7, -7) == 4
		&& task01(7, 7, 8, 7) == 3
		&& task01(7, 8, 7, 7) == 3
		&& task01(8, 7, 7, 7) == 3
		&& task01(7, 8, 9, 7) == 2
		&& task01(7, 9, 8, 7) == 2
		&& task01(8, 9, 7, 7) == 2;

	cout << "Task 01 [The same Numbers]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask02() {
	bool result = task02(1, 2, 3, 4) == "Ascending arithmetic progression."
		&& task02(2, 4, 6, 8) == "Ascending arithmetic progression."
		&& task02(15, 10, 5, 0) == "Descending arithmetic progression."
		&& task02(7, 7, 7, 7) == "Monotonic arithmetic progression."
		&& task02(2, 4, 8, 16) == "No arithmetic progression."

		&& task02(3, 5, 7, 9) == "Ascending arithmetic progression."
		&& task02(9, 11, 13, 15) == "Ascending arithmetic progression."
		&& task02(8, 10, 12, 14) == "Ascending arithmetic progression."
		&& task02(-15, -13, -11, -9) == "Ascending arithmetic progression."
		&& task02(-9, -7, -5, -3) == "Ascending arithmetic progression."
		&& task02(-4, -1, 2, 5) == "Ascending arithmetic progression."
		&& task02(-16, -12, -8, -4) == "Ascending arithmetic progression."

		&& task02(-2, -7, -12, -17) == "Descending arithmetic progression."
		&& task02(17, 12, 7, 2) == "Descending arithmetic progression."
		&& task02(37, 31, 25, 19) == "Descending arithmetic progression."
		&& task02(-19, -25, -31, -37) == "Descending arithmetic progression."
		&& task02(5, 2, -1, -4) == "Descending arithmetic progression."

		&& task02(-7, -7, -7, -7) == "Monotonic arithmetic progression."
		&& task02(0, 0, 0, 0) == "Monotonic arithmetic progression."

		&& task02(1, 1, 2, 3) == "No arithmetic progression."
		&& task02(3, 2, 1, 1) == "No arithmetic progression."
		&& task02(2, 3, 5, 7) == "No arithmetic progression."
		&& task02(7, 5, 3, 2) == "No arithmetic progression."
		&& task02(-1, -1, -2, -3) == "No arithmetic progression."
		&& task02(-3, -2, -1, -1) == "No arithmetic progression."
		&& task02(-2, -3, -5, -7) == "No arithmetic progression."
		&& task02(-7, -5, -3, -2) == "No arithmetic progression."
		&& task02(2, 3, 7, 8) == "No arithmetic progression."
		&& task02(8, 7, 3, 2) == "No arithmetic progression.";

	cout << "Task 02 [Arithmetic progression]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask03() {
	bool result = task03(1, 2, 3, 4) == 1
		&& task03(7, 7, 7, 7) == 7
		&& task03(-1, -2, -3, -4) == -4
		&& task03(2, 1, 3, 4) == 1
		&& task03(2, 3, 1, 4) == 1
		&& task03(2, 3, 4, 1) == 1
		&& task03(0, 0, 0, 0) == 0
		&& task03(-2, -3, -4, -1) == -4
		&& task03(-3, -4, -1, -2) == -4
		&& task03(-4, -1, -2, -3) == -4;

	cout << "Task 03 [Min Number]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask04() {
	bool result = !task04(2023)
		&& task04(1984)
		&& task04(2000)
		&& task04(0)
		&& !task04(-100)

		&& task04(1600)
		&& task04(1704)
		&& task04(1808)
		&& task04(1912)
		&& task04(2124)
		&& task04(2248)
		&& task04(2352)

		&& !task04(3000)
		&& !task04(1700)
		&& !task04(1800)
		&& !task04(1900)
		&& !task04(2100)
		&& !task04(2200)
		&& !task04(2300)

		&& task04(-1600)
		&& task04(-1704)
		&& task04(-1808)
		&& task04(-1912)
		&& task04(-2124)
		&& task04(-2248)
		&& task04(-2352)

		&& !task04(-3000)
		&& !task04(-1700)
		&& !task04(-1800)
		&& !task04(-1900)
		&& !task04(-2100)
		&& !task04(-2200)
		&& !task04(-2300);

	cout << "Task 04 [The Leap Year]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask05() {
	bool result = task05(4, 2023) == 30
		&& task05(5, 2023) == 31
		&& task05(2, 1900) == 28
		&& task05(2, 2000) == 29
		&& task05(-7, 2023) == 0
		&& task05(0, 2023) == 0
		&& task05(13, 2023) == 0

		&& task05(2, 2023) == 28
		&& task05(2, 1984) == 29
		&& task05(2, 2000) == 29
		&& task05(2, 0) == 29
		&& task05(2, -100) == 28
		&& task05(2, -2300) == 28
		&& task05(2, 2300) == 28

		&& task05(4, 2023) == 30
		&& task05(6, 2023) == 30
		&& task05(9, 2023) == 30
		&& task05(11, 2023) == 30

		&& task05(1, 2023) == 31
		&& task05(3, 2023) == 31
		&& task05(7, 2023) == 31
		&& task05(8, 2023) == 31
		&& task05(10, 2023) == 31
		&& task05(12, 2023) == 31;

	cout << "Task 05 [Amount of days]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask06() {
	bool result = task06(1, 2, 3) == 2
		&& task06(17, 23, 11) == 17
		&& task06(7, 7, 7) == 0
		&& task06(5, 7, 7) == 0

		&& task06(7, 5, 7) == 0
		&& task06(7, 7, 5) == 0
		&& task06(0, 0, 0) == 0
		&& task06(-7, -7, -7) == 0
		&& task06(-7, -5, -7) == 0
		&& task06(-7, -7, -5) == 0
		&& task06(7, -5, 7) == 0
		&& task06(7, 7, -5) == 0

		&& task06(23, 11, 17) == 17
		&& task06(11, 17, 23) == 17
		&& task06(-1, -2, -3) == -2
		&& task06(-2, -1, -3) == -2
		&& task06(-3, -1, -2) == -2
		&& task06(-7, 5, 7) == 5
		&& task06(7, -7, 5) == 5
		&& task06(7, 5, -7) == 5
		&& task06(5, 7, -7) == 5;

	cout << "Task 06 [The Average Number]" << (result ? RIGHT : WRONG) << endl;
}

void testingTaskX() {
	bool result = taskX(1, 2, 3, 3, 2, 1) == "Boxes are equal."
		&& taskX(2, 2, 3, 3, 2, 1) == "The first box is larger than the second one."
		&& taskX(3, 2, 1, 2, 2, 3) == "The first box is smaller than the second one."
		&& taskX(3, 11, 5, 4, 7, 9) == "Boxes are incomparable."
		&& taskX(0, 11, 5, 4, 7, 9) == "Error."
		&& taskX(3, -11, 5, 4, 7, 9) == "Error."

		&& taskX(1, 1, 1, 1, 1, 1) == "Boxes are equal."
		&& taskX(2, 1, 1, 2, 1, 1) == "Boxes are equal."
		&& taskX(1, 2, 1, 2, 1, 1) == "Boxes are equal."
		&& taskX(1, 1, 2, 2, 1, 1) == "Boxes are equal."
		&& taskX(2, 1, 1, 1, 2, 1) == "Boxes are equal."
		&& taskX(2, 1, 1, 1, 1, 2) == "Boxes are equal."
		&& taskX(2, 2, 1, 2, 2, 1) == "Boxes are equal."
		&& taskX(2, 1, 2, 2, 2, 1) == "Boxes are equal."
		&& taskX(1, 2, 2, 2, 2, 1) == "Boxes are equal."
		&& taskX(1, 2, 2, 1, 2, 2) == "Boxes are equal."
		&& taskX(1, 2, 2, 2, 1, 2) == "Boxes are equal."

		&& taskX(2, 3, 2, 3, 2, 1) == "The first box is larger than the second one."
		&& taskX(3, 2, 2, 3, 2, 1) == "The first box is larger than the second one."
		&& taskX(2, 2, 3, 3, 1, 2) == "The first box is larger than the second one."
		&& taskX(2, 2, 3, 2, 3, 1) == "The first box is larger than the second one."
		&& taskX(2, 2, 3, 2, 1, 3) == "The first box is larger than the second one."
		&& taskX(2, 2, 3, 1, 2, 3) == "The first box is larger than the second one."
		&& taskX(2, 2, 3, 1, 3, 2) == "The first box is larger than the second one."
		&& taskX(2, 2, 2, 1, 1, 1) == "The first box is larger than the second one."
		&& taskX(2, 2, 2, 2, 1, 1) == "The first box is larger than the second one."
		&& taskX(2, 2, 2, 1, 2, 1) == "The first box is larger than the second one."
		&& taskX(2, 2, 2, 1, 1, 2) == "The first box is larger than the second one."
		&& taskX(2, 2, 2, 2, 2, 1) == "The first box is larger than the second one."
		&& taskX(2, 2, 2, 2, 1, 2) == "The first box is larger than the second one."
		&& taskX(2, 2, 2, 1, 2, 2) == "The first box is larger than the second one."
		&& taskX(2, 2, 1, 1, 1, 1) == "The first box is larger than the second one."
		&& taskX(2, 1, 2, 1, 1, 1) == "The first box is larger than the second one."
		&& taskX(1, 2, 2, 1, 1, 1) == "The first box is larger than the second one."
		&& taskX(1, 1, 2, 1, 1, 1) == "The first box is larger than the second one."
		&& taskX(1, 2, 1, 1, 1, 1) == "The first box is larger than the second one."
		&& taskX(2, 1, 1, 1, 1, 1) == "The first box is larger than the second one."

		&& taskX(3, 1, 2, 2, 2, 3) == "The first box is smaller than the second one."
		&& taskX(2, 3, 1, 2, 2, 3) == "The first box is smaller than the second one."
		&& taskX(2, 1, 3, 2, 2, 3) == "The first box is smaller than the second one."
		&& taskX(1, 2, 3, 2, 2, 3) == "The first box is smaller than the second one."
		&& taskX(1, 3, 2, 2, 2, 3) == "The first box is smaller than the second one."
		&& taskX(3, 2, 1, 2, 3, 2) == "The first box is smaller than the second one."
		&& taskX(3, 2, 1, 3, 2, 2) == "The first box is smaller than the second one."
		&& taskX(1, 1, 1, 2, 2, 2) == "The first box is smaller than the second one."
		&& taskX(2, 1, 1, 2, 2, 2) == "The first box is smaller than the second one."
		&& taskX(1, 2, 1, 2, 2, 2) == "The first box is smaller than the second one."
		&& taskX(1, 1, 2, 2, 2, 2) == "The first box is smaller than the second one."
		&& taskX(1, 2, 2, 2, 2, 2) == "The first box is smaller than the second one."
		&& taskX(2, 1, 2, 2, 2, 2) == "The first box is smaller than the second one."
		&& taskX(2, 2, 1, 2, 2, 2) == "The first box is smaller than the second one."
		&& taskX(1, 1, 1, 1, 2, 2) == "The first box is smaller than the second one."
		&& taskX(1, 1, 1, 2, 1, 2) == "The first box is smaller than the second one."
		&& taskX(1, 1, 1, 2, 2, 1) == "The first box is smaller than the second one."
		&& taskX(1, 1, 1, 1, 1, 2) == "The first box is smaller than the second one."
		&& taskX(1, 1, 1, 1, 2, 1) == "The first box is smaller than the second one."
		&& taskX(1, 1, 1, 2, 1, 1) == "The first box is smaller than the second one."

		&& taskX(3, 5, 11, 4, 7, 9) == "Boxes are incomparable."
		&& taskX(11, 5, 3, 4, 7, 9) == "Boxes are incomparable."
		&& taskX(11, 3, 5, 4, 7, 9) == "Boxes are incomparable."
		&& taskX(5, 11, 3, 4, 7, 9) == "Boxes are incomparable."
		&& taskX(5, 3, 11, 4, 7, 9) == "Boxes are incomparable."
		&& taskX(3, 11, 5, 4, 9, 7) == "Boxes are incomparable."
		&& taskX(3, 11, 5, 7, 9, 4) == "Boxes are incomparable."
		&& taskX(3, 11, 5, 7, 4, 9) == "Boxes are incomparable."
		&& taskX(3, 11, 5, 9, 7, 4) == "Boxes are incomparable."
		&& taskX(3, 11, 5, 9, 4, 7) == "Boxes are incomparable."

		&& taskX(5, 12, 8, 15, 16, 2) == "Boxes are incomparable."
		&& taskX(5, 8, 12, 15, 16, 2) == "Boxes are incomparable."
		&& taskX(12, 5, 8, 15, 16, 2) == "Boxes are incomparable."
		&& taskX(12, 8, 5, 15, 16, 2) == "Boxes are incomparable."
		&& taskX(8, 5, 12, 15, 16, 2) == "Boxes are incomparable."
		&& taskX(8, 12, 5, 15, 16, 2) == "Boxes are incomparable."
		&& taskX(5, 12, 8, 15, 2, 16) == "Boxes are incomparable."
		&& taskX(5, 12, 8, 16, 15, 2) == "Boxes are incomparable."
		&& taskX(5, 12, 8, 16, 2, 15) == "Boxes are incomparable."
		&& taskX(5, 12, 8, 2, 16, 15) == "Boxes are incomparable."
		&& taskX(5, 12, 8, 2, 15, 16) == "Boxes are incomparable."
		
		&& taskX(3, 7, 11, 1, 9, 11) == "Boxes are incomparable."
		&& taskX(7, 11, 3, 1, 9, 11) == "Boxes are incomparable."
		&& taskX(11, 3, 7, 1, 9, 11) == "Boxes are incomparable."
		&& taskX(3, 7, 11, 9, 11, 1) == "Boxes are incomparable."
		&& taskX(3, 7, 11, 11, 1, 9) == "Boxes are incomparable."

		&& taskX(3, 0, 5, 4, 7, 9) == "Error."
		&& taskX(3, 11, 0, 4, 7, 9) == "Error."
		&& taskX(3, 11, 5, 0, 7, 9) == "Error."
		&& taskX(3, 11, 5, 4, 0, 9) == "Error."
		&& taskX(3, 11, 5, 4, 7, 0) == "Error."
		&& taskX(-3, 11, 5, 4, 7, 9) == "Error."
		&& taskX(3, 11, -5, 4, 7, 9) == "Error."
		&& taskX(3, 11, 5, -4, 7, 9) == "Error."
		&& taskX(3, 11, 5, 4, -7, 9) == "Error."
		&& taskX(3, 11, 5, 4, 7, -9) == "Error.";

	cout << "Task X  [Boxes]" << (result ? RIGHT : WRONG) << endl;
}