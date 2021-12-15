# 将呼号转换成字母解释法的单词组合的C程序

参考了

* [北约音标字母条目](https://zh.wikipedia.org/wiki/%E5%8C%97%E7%BA%A6%E9%9F%B3%E6%A0%87%E5%AD%97%E6%AF%8D)（ICAO标准）
* 业余无线电通信（第五版）第49页表2-1

整理为在中国大陆的习惯用法

## 用法

```
% clang -O0 -Wall -Wpedantic -Wextra -Werror -std=c99 -o icao icao.c && ./icao
        将呼号转换成字母解释法的单词组合的C程序

请输入要转换的呼号：bs7h
该呼号的字母解释法是： Bravo Sierra Seven Hotel

```
