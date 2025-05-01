/*Vasya is very upset that many people on the Net mix uppercase and lowercase letters in one word.
That's why he decided to invent an extension for his favorite browser that would change the letters' register
 in every word so that it either only consisted of lowercase letters or,
 vice versa, only of uppercase ones. At that as little as possible letters should be changed in the word. For example, the word HoUse must be replaced with house, and the word ViP — with VIP.
 If a word contains an equal number of uppercase and lowercase letters, you should replace all the letters with lowercase ones. For example, maTRIx should be replaced by matrix.
Your task is to use the given method on one given word.*/

/*#include <iostream>
#include <cctype>
using namespace std;

int main()
{ string ch;
getline(cin, ch);
for (int i = 0; i < ch.length(); i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z') {
            ch[i] = ch[i] + 32;
        }
    }

    cout << ch << endl;

}*/



/*#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string ch;
    getline(cin, ch);

    for (int i = 0; i < ch.length(); i++) {
        if (isupper(ch[i])) {
            ch[i] = tolower(ch[i]);
        } else if (islower(ch[i]))
         {
            ch[i] = toupper(ch[i]);
        }

    }

    cout << ch;
    return 0;
}*/




#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string ch;
    cin >> ch;

    int lower = 0, upper = 0;


    for (int i = 0; i < ch.length(); i++) {
        if (islower(ch[i]))
            lower++;
        else
            upper++;
    }

    if (upper > lower) {
        for (int i = 0; i < ch.length(); i++) {
            ch[i] = toupper(ch[i]);
        }
    } else {
        for (int i = 0; i < ch.length(); i++) {
            ch[i] = tolower(ch[i]);
        }
    }

    cout << ch;
    return 0;
}
