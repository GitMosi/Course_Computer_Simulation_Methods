// Function to concatenate two strings using value semantics (copies)
string concatenate(string a, string b) {
  // Return the concatenation of 'a' and 'b'
  return a+b;
}

// Function to concatenate two strings using reference semantics (references)
string concatenate(string& a, string& b) {
  // Return the concatenation of 'a' and 'b'
  return a+b;
}

// Function to concatenate two strings using const reference semantics (references)
string concatenate(const string& a, const string& b) {
  // Return the concatenation of 'a' and 'b'
  return a+b;
}
