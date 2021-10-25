/* 
   标准地将国内业余无线电呼号转换成字母解释法的一系列单词组合

   用法：
     pcc -Wall -Wpedantic -Wextra -Werror -O0 -std=c11 -o icao icao.c && ./icao

   参考了
     TXT格式题库 http://114.115.246.55:8091/CRAC/userfiles/file/exam/download/2021-09-24/TXT%E9%A2%98%E5%BA%93%E5%8C%85(v20210924).zip
     业余无线电通信（第五版）第49页表2-1、
     北约音标字母条目 https://zh.wikipedia.org/wiki/%E5%8C%97%E7%BA%A6%E9%9F%B3%E6%A0%87%E5%AD%97%E6%AF%8D
   整理为在中国大陆的习惯用法
*/

#include <stdio.h>
#include <string.h>

int main ()
{
    char word[7];
    char *phonetic[48]= { "test" };
    char **p = phonetic;
    unsigned int count = 0, j = 0, k;

    printf("请输入一个呼号：");
    scanf("%[^\n]%*c", word);

    while(count < sizeof(word))
    {
        switch (word[count])
        {
            case 'A': case 'a': p[j] = " Alfa"; j++;
                break;
            case 'B': case 'b': p[j] = " Bravo"; j++;
                break;
            case 'C': case 'c': p[j] = " Charlie"; j++;
                break;
            case 'D': case 'd': p[j] = " Delta"; j++;
                break;
            case 'E': case 'e': p[j] = " Echo"; j++;
                break;
            case 'F': case 'f': p[j] = " Foxtrot"; j++;
                break;
            case 'G': case 'g': p[j] = " Golf"; j++;
                break;
            case 'H': case 'h': p[j] = " Hotel"; j++;
                break;
            case 'I': case 'i': p[j] = " India"; j++;
                break;
            case 'J': case 'j': p[j] = " Juliett"; j++;
                break;
            case 'K': case 'k': p[j] = " Kilo"; j++;
                break;
            case 'L': case 'l': p[j] = " Lima"; j++;
                break;
            case 'M': case 'm': p[j] = " Mike"; j++;
                break;
            case 'N': case 'n': p[j] = " November"; j++;
                break;
            case 'O': case 'o': p[j] = " Oscar"; j++;
                break;
            case 'P': case 'p': p[j] = " Papa"; j++;
                break;
            case 'Q': case 'q': p[j] = " Quebec"; j++;
                break;
            case 'R': case 'r': p[j] = " Romeo"; j++;
                break;
            case 'S': case 's': p[j] = " Sierra"; j++;
                break;
            case 'T': case 't': p[j] = " Tango"; j++;
                break;
            case 'U': case 'u': p[j] = " Uniform"; j++;
                break;
            case 'V': case 'v': p[j] = " Victor"; j++;
                break;
            case 'W': case 'w': p[j] = " Whiskey"; j++;
                break;
            case 'X': case 'x': p[j] = " X-ray"; j++;
                break;
            case 'Y': case 'y': p[j] = " Yankee"; j++;
                break;
            case 'Z': case 'z': p[j] = " Zulu"; j++;
                break;
            case '0': p[j] = " Zero"; j++;
                break;
            case '1': p[j] = " One"; j++;
                break;
            case '2': p[j] = " Two"; j++;
                break;
            case '3': p[j] = " Three"; j++;
                break;
            case '4': p[j] = " Four"; j++;
                break;
            case '5': p[j] = " Five"; j++;
                break;
            case '6': p[j] = " Six"; j++;
                break;
            case '7': p[j] = " Seven"; j++;
                break;
            case '8': p[j] = " Eight"; j++;
                break;
            case '9': p[j] = " Nine"; j++;
                break;
            //default: printf("您输入的部分内容非字母和数字。\n");
        }
        count++;
    }
    printf("呼号%s的字母解释法是：\n", word);
    for ( k = 0; k < j ; k++ )
        printf("%s", p[k]);
    printf("\n");

    return 0;
}

