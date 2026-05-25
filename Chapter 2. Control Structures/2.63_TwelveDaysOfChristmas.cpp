/*("The Twelve Days of Christmas " Song) Write a program that uses repetition and switch
structures to print the song "The Twelve Days of Christmas." One swi tch structure should be used
to print the day(i.e., "First," "Second," etc.).A separate switch structure should be used to print
the remainder of each verse.Visit the Web site www . 12days.com / library / carols /
12daysof xmas.htm for the complete lyrics to the song.*/

#include <iostream>

int main() {
	for (int i{ 1 }; i <= 12; i++) {
		std::cout << "On the ";
		
		switch (i)
		{
		case 1: std::cout << "first "; break;
		case 2: std::cout << "second "; break;
		case 3: std::cout << "third "; break;
		case 4: std::cout << "fourth "; break;
		case 5: std::cout << "fifth "; break;
		case 6: std::cout << "sixth "; break;
		case 7: std::cout << "seventh "; break;
		case 8: std::cout << "eighth "; break;
		case 9: std::cout << "ninth "; break;
		case 10: std::cout << "tenth "; break;
		case 11: std::cout << "eleventh "; break;
		case 12: std::cout << "twelfth "; break;

		default: std::cout << "Invaild message"; break;
		}

		std::cout << "of Christmas" << std::endl;
		std::cout << "my true love sent to me: " << std::endl;

		switch (i)
		{
		case 1: std::cout << "A Partridge in a Pear Tree" << std::endl; break;
		case 2: std::cout << "Two Turtle Doves\nand a Partridge in a Pear Tree" << std::endl; break;
		case 3: std::cout << "Three French Hens\nTwo Turtle Doves\nand a Partridge in a Pear Tree" << std::endl; break;
		case 4: std::cout << "Four Calling Birds\nThree French Hens\nTwo Turtle Doves\nand a Partridge in a Pear Tree " << std::endl; break;
		case 5: std::cout << "Five Golden Rings\nFour Calling Birds\nThree French Hens\nTwo Turtle Doves\nand a Partridge in a Pear Tree\n " << std::endl; break;
		case 6: std::cout << "Six Geese a Laying\nFive Golden Rings\nFour Calling Birds\nThree French Hens\nTwo Turtle Doves\nand a Partridge in a Pear Tree" << std::endl; break;
		case 7: std::cout << "Seven Swans a Swimming\nSix Geese a Laying\nFive Golden Rings\nFour Calling Birds\nThree French Hens\nTwo Turtle Doves\nand a Partridge in a Pear Tree " << std::endl; break;
		case 8: std::cout << "Eight Maids a Milking\nSeven Swans a Swimming\nSix Geese a Laying\nFive Golden Rings\nFour Calling Birds\nThree French Hens\nTwo Turtle Doves\nand a Partridge in a Pear Tree" << std::endl; break;
		case 9: std::cout << "Nine Ladies Dancing\nEight Maids a Milking\nSeven Swans a Swimming\nSix Geese a Laying\nFive Golden Rings\nFour Calling Birds\nThree French Hens\nTwo Turtle Doves\nand a Partridge in a Pear Tree " << std::endl; break;
		case 10: std::cout << "Ten Lords a Leaping\nNine Ladies Dancing\nEight Maids a Milking\nSeven Swans a Swimming\nSix Geese a Laying\nFive Golden Rings\nFour Calling Birds\nThree French Hens\nTwo Turtle Doves\nand a Partridge in a Pear Tree " << std::endl; break;
		case 11: std::cout << "Eleven Pipers Piping\nTen Lords a Leaping\nNine Ladies Dancing\nEight Maids a Milking\nSeven Swans a Swimming\nSix Geese a Laying\nFive Golden Rings\nFour Calling Birds\nThree French Hens\nTwo Turtle Doves\nand a Partridge in a Pear Tree " << std::endl; break;
		case 12: std::cout << "12 Drummers Drumming\nEleven Pipers Piping\nTen Lords a Leaping\nNine Ladies Dancing\nEight Maids a Milking\nSeven Swans a Swimming\nSix Geese a Laying\nFive Golden Rings\nFour Calling Birds\nThree French Hens\nTwo Turtle Doves\nand a Partridge in a Pear Tree " << std::endl; break;

		default: std::cout << "Invaild message"; break;
		}
	}
}