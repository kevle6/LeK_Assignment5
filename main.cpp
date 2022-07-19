/* Full Name: Kevin T Le

Student ID: 2406054

Chapman Email: kevle@chapman.edu

Course Number and Section: CPSC 298-06

Programming Assignment 5

Purpose: This program utilizes two classes: Document and Email. Email derives from the Document class.
The Document class provides the textfield, and the Email specifies the sender, recipient, and title of email.
Both classes allow the objects to be printed to a seperate file within the working directory. */

#include <string>
#include <iostream>
#include <fstream>
#include "Document.h"
#include "Email.h"
using namespace std;

int main() {

  Document Doc1; // Using Default Constructor
  Document Doc2("This is either Doc2 or Doc4."); // Using Overloaded Constructor
  Document Doc3 = Doc1; // Using Overloaded Assignment Operator
  Document Doc4(Doc2); // Using Copy Constructor

  Doc1.setText("This is Doc 1."); // Changes Text of Doc1

  Doc1.printToFile("Doc1.txt"); // Prints Doc1 to Doc1.txt
  Doc2.printToFile("Doc2.txt"); // Prints Doc2 to Doc2.txt
  cout << "\nDoc3 Text: " << Doc3.getText() << endl; // Prints Doc3 Text into Terminal
  cout << "\nDoc4 Text: " << Doc4.getText() << endl; // Prints Doc4 Text into Terminal

  Email Email1; // Using Default Constructor
  Email Email2("How are you doing?", "Kevin", "Mark", "Hello!"); // Using Overloaded Constructor
  Email Email3(Email2); // Using Copy Constructor
  Email Email4 = Email1; // Using Overloaded Assignment Operator

  Email1.setText("Make sure to finish Calculus Homework."); // Changes Text of Email1
  Email1.setSender("David"); // Changes Sender of Email1
  Email1.setRecipient("Lisa"); // Changes Recipient of Email1
  Email1.setTitle("Calc"); // Changes Title of Email1

  Email1.printToFile("Email1.txt"); // Prints Email1 to Email1.txt
  Email2.printToFile("Email2.txt"); // Prints Email2 to Email2.txt
  cout << "\nEmail 3 Sender: " << Email3.getSender() << endl; // Prints Email3 Sender into Terminal
  cout << "\nEmail 3 Message: " << Email3.getText() << endl; // Prints Email3 Message into Terminal
  cout << "\nEmail 4 Title: " << Email4.getTitle() << endl; // Prints Email4 Title into Terminal
  cout << "\nEmail 4 Recipient: " << Email4.getRecipient() << endl; // Prints Email4 Recipient into Terminal

  return 0;
}
