#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <string>
using namespace std;

class Document {
public:
  Document(); // Default Constructor
  Document(string text); // Overloaded Constructor
  Document(const Document& d); // Copy Constructor
  virtual ~Document(); // Virtual Destructor

  string getText(); // Get Text from Document object
  void setText(const string& text); // Sets Text in Document object
  Document& operator=(const Document& textfield); // Overloaded Assignment Operator
  virtual void printToFile(string fileName); // Prints the contents of the Document to a file with the given name

protected:
  string m_text; // Stores any textual content for the document

};

#endif
