#define MAX_LINE_LEN 2200
#define TOTAL_WORDS 2309
#define MAX_WORD_LENGTH 6
void generateBDD(char* input_file, char* output_file);
void getWord(char* bddName, char words[TOTAL_WORDS][MAX_WORD_LENGTH]);
int checkValidWord(char* word, char words[TOTAL_WORDS][MAX_WORD_LENGTH]);
void checkLetters(char* word,char* guess, char* try);
void displayColorLetter(char* word, char* try);
