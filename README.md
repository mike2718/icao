# 业余无线电字母解释法翻译器C程序

将一串呼号转换成字母解释法的一系列单词组合

参考了业余无线电通信（第五版）第49页的表，以及[北约音标字母条目](https://zh.wikipedia.org/wiki/%E5%8C%97%E7%BA%A6%E9%9F%B3%E6%A0%87%E5%AD%97%E6%AF%8D)

整理为在中国大陆的习惯用法

## 例子

```
mike@hp2540p:~/dev2/icao/ > pcc -o icao icao.c && ./icao
请输入一个呼号：bg7xtq
呼号bg7xtq的字母解释法是：
 Bravo   Golf    Seven   X-ray   Tango   Quebec
```
