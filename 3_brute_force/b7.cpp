/*
STRING:
AABAACAADAABAAABAA
AABA

Pattern:
AABA

get the index = 0
get the index = 9
get the index = 13
*/

#include <iostream>
#include <cstring>

using namespace std;

void search(char *pat, char *txt);

int main() {
    char txt[] = "AABAACAADAABAAABAA";
    char pat[] = "AABA";
    search(pat, txt);

    return 0;
}

void search(char *pat, char *txt) {
    // string length
    int M = strlen(pat);
    int N = strlen(txt);
    int i, j;

    //loop to slide pat[] one by one
    for (i = 0; i <= N - M; i++) {
        // check the pattern match vs txt
        // not equal -> break
        // if found -> get the index
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;
        if (j == M)
            cout << "Pattern found at index " << i << endl;
    }
}
