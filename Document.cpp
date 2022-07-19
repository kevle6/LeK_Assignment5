#include "Document.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

Document::Document() { // Default Constructor
  m_text = "Empty.";
}
Document::Document(string text) { // Overloaded Constructor
  m_text = text;
}
Document::Document(const Document& d) { // Copy Constructor
  m_text = d.m_text;
}
Document::~Document() { // Virtual Destructor
}
string Document::getText() { // Get Text from Document object
  return m_text;
}
void Document::setText(const string& text) { // Sets Text in Document object
  m_text = text;
}

// Overloaded Assignment Operator
Document& Document::operator=(const Document& textfield) {
  m_text = textfield.m_text;
  return *this;
}

// Prints the contents of the Document to a file with the given name
void Document::printToFile(string fileName){
  ofstream openFile;
  openFile.open(fileName);
  openFile << getText();
  openFile.close();
}
