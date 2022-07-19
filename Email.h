#ifndef EMAIL_H
#define EMAIL_H
#include "Document.h"
#include <string>
using namespace std;

class Email : public Document { // Email class derives from the Document class
public:
  Email(); // Default Constructor
  Email(string text, string sender, string recipient, string title); // Overloaded Constructor
  Email(const Email& e, const Document& d); // Copy Constructor
  virtual ~Email(); // Destructor

  string getSender(); // Get Sender from Email Object
  string getRecipient(); // Get Recipient from Email Object
  string getTitle(); // Get Title from Email Object

  void setSender(const string& sender); // Sets Sender from Email Object
  void setRecipient(const string& recipient); // Sets Recipient from Email Object
  void setTitle(const string& title); // Sets Title from Email Object

  void printToFile(string fileName); // Prints the contents of the Email to a file with the given name
  Email& operator=(const Email& email); // Overloaded Assignment Operator

private:
  string m_sender; // Stores the sender of the email
  string m_recipient; // Stores the recipient of the email
  string m_title; // Stores the title of the email

};

#endif
