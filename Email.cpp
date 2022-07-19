#include "Email.h"
#include "Document.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

Email::Email() : Document() { // Default Constructor values, default m_text value derived from Document
  m_sender = "Unknown Sender";
  m_recipient = "Unknown Recipient";
  m_title = "(no subject)";
}

Email::Email(string text, string sender, string recipient, string title) : Document(text) {
  m_sender = sender; // Overloaded Constructor, assigns m_text using Document
  m_recipient = recipient;
  m_title = title;
}
Email::Email(const Email& e, const Document& d) : Document(d) {
  m_sender = e.m_sender; // Copy Constructor, copies m_text from Document
  m_recipient = e.m_recipient;
  m_title = e.m_title;
}

Email::~Email() { // Destructor
}

string Email::getSender() { // Get Sender from Email Object
  return m_sender;
}
string Email::getRecipient() { // Get Recipient from Email Object
  return m_recipient;
}
string Email::getTitle() { // Get Title from Email Object
  return m_title;
}

void Email::setSender(const string& sender) { // Sets Sender from Email Object
  m_sender = sender;
}
void Email::setRecipient(const string& recipient) { // Sets Recipient from Email Object
  m_recipient = recipient;
}
void Email::setTitle(const string& title) { // Sets Title from Email Object
  m_title = title;
}


void Email::printToFile(string fileName) { // Prints the contents of the Email to a file with the given name
  ofstream openFile;
  openFile.open(fileName); // Opens File
  openFile << "Title: " << getTitle() << endl; // Prints in Entire Email
  openFile << "From: " << getSender() << endl;
  openFile << "To: " << getRecipient() << endl;
  openFile << "Message: " << getText() << endl;
  openFile.close(); // Close File
}
Email& Email::operator=(const Email& email) { // Overloaded Assignment Operator
  m_text = email.m_text;
  m_sender = email.m_sender;
  m_recipient = email.m_recipient;
  m_title = email.m_title;
  return *this;
}
