# 一. 流程控制
- 1. 概念：用来控制代码按什么结构顺序执行
- 2. 主要分顺序结构，分支结构和循环结构三种

## 二. 顺序结构

- 1. 概念：程序按照代码的先后顺序，依次执行

## 三. 分支结构

- 1. 概念：根据不同的条件执行不同的路径代码（多选一的过程），从而得到不同的结果
- 2. if的语法结构
-   if（条件表达式）{
-     执行语句
-     }
- 注意：1. 如果if里面的条件表达式结构为真，即true, 则执行大括号里面的执行语句
-      2. 如果if里面的条件表达式结构为假，则不执行大括号里面的语句，此时执行if语句后面的代码
- 3. if else语句（双分支语句）
- 条件成立时执行if里面代码，否则执行else里面的代码，2选1
-    if（条件表达式）{
-       执行语句1
-       } else {
-       执行语句2
-       }
-  执行语句为真，则执行语句1，否则，执行语句2。只能执行一个语句
- 4. if else if语句（多分支语句）
- 利用多个条件来选择不同的语句执行，得到不同的结构，多选1
-     if(条件表达式1) {
-     语句1
-      } else if(条件表达式2) {
-     语句2
-     } else if(条件表达式3) {
-     语句3
-     } else {
-     最后的语句
-     }

## 四. 三元表达式

- 用法：条件表达式? 表达式1: 表达式2
- 若结果为真，则返回表达式1的值。如果条件表达式为假，则返回表达式2的值

## 五.switch语句

- 1. 概念：switch语句也是多分支语句，可以实现多选一
- 语法：  switch(表达式) {       
-           case value1:
-               执行语句1；
-                 break; 
-            case value2:
-               执行语句2；
-                 break; 
-             default:
-             执行最后的语句；
-          }
- 利用表达值和case后面的选项值相匹配，如果匹配得上，就执行case里面的语句。如果没有匹配上，就执行default里面的语句
- 注意：1. 表达式经常写成变量
-      2. 变量值和case里面的值相匹配的时候是全等的，必须值和数据类型一致才可以
       3. 如果当前case里面没有break，那么不会退出switch，会继续执行下一个case

- 2. switch语句和if else if语句的区别
-     一般情况下，两个语句可以互相替换
-     switch语句常处理case为比较确定值的情况，if else if常用于判断范围
-     当分支较少时，if else if执行效率比switch高
-     当分支较多时，switch语句执行效率较高