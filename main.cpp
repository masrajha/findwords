#include <iostream>
#include <cstring>

using namespace std;
const int cols=16, rows=15;

const char words [rows][cols] = { "tgbwwinterwsesn", 
                            "aaunttmmhfoodnb", 
                            "jlwcqldzmpmvdmr", 
                            "asagmquwvvbsohi", 
                            "bwplotanadtpgnc", 
                            "rewngodjcpnatnk", 
                            "eeotwosbqharrsa", 
                            "azcgeswewnaknpb", 
                            "dinnerqodlwdcar", 
                            "onopkwmparktzcc", 
                            "qbfrogmamwpweey", 
                            "lqzqnnmrzjjsclg", 
                            "mosgzczetdbooto", 
                            "pdcrzmsngrdnrpz", 
                            "ohnkzwaterjgtra"};

char *getWordVertical(int);
char* strrev( char*);
bool searchVertical(char *);

int main()
{
    char word[]="zogy";
    if (searchVertical(word))
        cout<<"Ada";
        else cout<<"Tidak Ada";
    return 0;
}
/**
 * Fungsi untuk mencari kata secara vertikal dari atas dan dari bawah
 */ 
bool searchVertical(char *word){
    char *s;
    for (int i=0;i<cols-1;i++){
        s = getWordVertical(i);
        if (strstr(s,word)>0)
            return true;
        if (strstr(strrev(s),word)>0)
            return true;
        
    }
    return false;
}

/** 
 * Fungsi untuk mengambil string dari kolom ke i 
 */
char *getWordVertical(int i){
    char *ret=new char;

    for (int j=0;j<cols-1;j++){
            *(ret+j)=words[j][i];
        }
    *(ret+(cols-1))='\0';
    return ret;
}

/** Fungsi untuk membalik kata
    code from http://www.cplusplus.com/forum/general/14951/
*/
char* strrev( char* s )
  {
  char  c;
  char* s0 = s - 1;
  char* s1 = s;

  /* Find the end of the string */
  while (*s1) ++s1;

  /* Reverse it */
  while (s1-- > ++s0)
    {
    c   = *s0;
    *s0 = *s1;
    *s1 =  c;
    }

  return s;
  }