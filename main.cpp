#include <iostream>
#include <cstring>

using namespace std;
const int cols = 16, rows = 15;

 char words[rows][cols] = {"tgbwwinterwsesn",
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
char *strrev(char *);
bool searchVertical(char *);
void printDiag();

bool searchHorizontal(char *);


int main()
{
    // cout<< *(words+0);
    // const char *s= *(words+0);
    // cout<<s;
    char word[] = "goooddoof";
    if (searchVertical(word))
        cout << "Ada";
    else if (searchHorizontal(word))
        cout << "Ada";
    else 
        cout << "Tidak Ada";
    cout << endl;
    printDiag();
    return 0;
}

void printDiag()
{
    int i = 0;

    while (i < rows)
    {
        int k = i;
        int l = 0;

        char *s=new char;
        while (k < rows && l < cols - 1)
        {
            *(s+l)=words[k][l];
            k++;
            l++;
        }
        s[l]='\0';
        cout<<s<<"  "<<strrev(s);
        cout<<endl;
        i++;
    }
}

/**
 * Fungsi untuk mencari kata secara horizontal dari kiri dan kanan
 */
bool searchHorizontal(char *word)
{
    
    for (int i = 0; i < rows; i++)
    {
        char *s = words[i];
        if (strstr(s, word) > 0)
            return true;     
        if (strstr(strrev(s), word) > 0)
            return true;
    }
    return false;
}

/**
 * Fungsi untuk mencari kata secara vertikal dari atas dan dari bawah
 */
bool searchVertical(char *word)
{
    char *s;
    for (int i = 0; i < cols - 1; i++)
    {
        s = getWordVertical(i);
        if (strstr(s, word) > 0)
            return true;
        if (strstr(strrev(s), word) > 0)
            return true;
    }
    return false;
}

/** 
 * Fungsi untuk mengambil string dari kolom ke i 
 */
char *getWordVertical(int i)
{
    char *ret = new char;

    for (int j = 0; j < cols - 1; j++)
    {
        *(ret + j) = words[j][i];
    }
    *(ret + (cols - 1)) = '\0';
    return ret;
}

/** Fungsi untuk membalik kata
    code from http://www.cplusplus.com/forum/general/14951/
*/
char *strrev(char *s)
{
    char c;
    char *s0 = s - 1;
    char *s1 = s;

    /* Find the end of the string */
    while (*s1)
        ++s1;

    /* Reverse it */
    while (s1-- > ++s0)
    {
        c = *s0;
        *s0 = *s1;
        *s1 = c;
    }

    return s;
}
