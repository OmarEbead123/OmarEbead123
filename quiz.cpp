#inculde <iostream>
using namespace std
int main() {
  cout << "Welcome to a quiz about me. There will be 10 questions about me, lets see how many you get correct. Ready?\n";
  cin >> start;
  if (start == "yes" || start == "Yes") {
    cout << "Question one: What is my favourite food?\n";
    cin >> q1;
    if (q1 == "Chicken" || q1 == "chicken") {
      cout << "Correct\n";
    }
    cout << "Question two: What is my faviourite colour?\n";
    cin >> q2;
    if (q2 == "Blue" || q1 == "blue") {
      cout << "Correct\n";
    }
  }
}
