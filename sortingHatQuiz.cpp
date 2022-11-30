#include <iostream>

int main (){


//Declares variables for house names

int gryffindor = 0;

int hufflepuff = 0;

int ravenclaw = 0;

int slytherin = 0;

//Declares variables for answers
int answer1;
int answer2;
int answer3;
int answer4;

//Creates greeting for user
std::cout << "Welcome to the Sorting Hat quiz!  Find out what Hogwarts house you belong to!\n";

//Question 1
std::cout << "Question 1: When I am dead, I want people to remember me as:\n";
std::cout << "1) The Good\n";
std::cout << "2) The Great\n";
std::cout << "3) The Wise\n";
std::cout << "4) The Bold\n";
std::cin >> answer1;

//Assign Answer 1 to a house
if (answer1 == 1) {
  hufflepuff ++;
} else if (answer1 == 2) {
  slytherin ++;
} else if (answer1 == 3) {
  ravenclaw ++;
} else if (answer1 == 4) {
  gryffindor ++;
} else {
  std::cout << "Invalid answer!\n";
}

//Question 2
std::cout << "Question 2: Dawn or Dusk?\n";
std::cout << "1) Dawn\n";
std::cout << "2) Dusk\n";
std::cin >> answer2;

//Assign answer 2 to a house
if (answer2 == 1) {
  gryffindor ++;
  ravenclaw ++;
} else if (answer2 == 2) {
  hufflepuff ++;
  slytherin ++;
} else {
  std::cout << "That is an invalid answer!";
}

//Questions 3
std::cout << "Which kind of instrument most pleases your ear?\n";
std::cout << "1) The violin\n";
std::cout << "2) The trumpet\n";
std::cout << "3) The piano\n";
std::cout << "4) The drum\n";
std::cin >> answer3;

//Assigns house to answer 3
if (answer3 == 1) {
  slytherin ++;
} else if (answer3 == 2) {
  hufflepuff ++;
} else if (answer3 == 3) {
  ravenclaw ++;
} else if (answer3 == 4) {
  gryffindor ++;
} else {
  std::cout << "Answer is invalid!\n";
}

//Question 4
std::cout << "Question 4: Which road tempts you the most?\n";
std::cout << "1) The wide, sunny grassy lane\n";
std::cout << "2) The narrow, dark, lantern-lit alley\n";
std::cout << "3) The twisting, lead-strewn path through woods\n";
std::cout << "4) The cobbled street lined ancient buildings\n";
std::cin >> answer4;

//Assigns a house to answer
if (answer4 == 1) {
  hufflepuff ++;
} else if (answer4 == 2) {
  slytherin ++;
} else if (answer4 == 3) {
  gryffindor ++;
} else if (answer4 == 4) {
  ravenclaw ++;
} else {
  std::cout << "Please enter a valid answer\n";
}



//Results
int max = 0;
std::string house;

if (gryffindor > max) {
  max = gryffindor;
  house = "Gryffindor";
}

if (hufflepuff > max) {
  max = hufflepuff;
  house = "Hufflepuff";
}

if (ravenclaw > max) {
  max = ravenclaw;
  house = "Ravenclaw";
}

if (slytherin > max) {
  max = slytherin;
  house = "Slytherin";
}

std::cout << "Hmmmm....Your house is " << house << "!\n";


}