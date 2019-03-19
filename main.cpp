#include <iostream>
using namespace std;
const char words [15][16] = { "tgbwwinterwsesn", 
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

char **getTopDown();
int main()
{
    char **topDown = getTopDown();
    cout<< *(*(topDown+0)+1);

    return 0;
}
char **getTopDown(){
    char *(ret[15]);
    char  row[16];
    for (int i=0;i<15;i++){
        for (int j=0;j<15;j++){
            row[j]=words[j][i];
        }
        row[15]='\0';
        ret[i]=row;
        cout<<ret[i]<<endl;
    }
    //  for (int i=0;i<15;i++){
         cout<<ret[0]<<endl;
    //  }
    return ret;
}