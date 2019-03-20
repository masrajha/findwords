#include <iostream>

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

char *getCols(int);
char* strrev( char*);
int main()
{
    char *c1=getCols(0);
    cout<<strrev(c1);

    return 0;
}

/** 
 * Fungsi untuk mengambil string dari kolom ke i 
 */
char *getCols(int i){
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