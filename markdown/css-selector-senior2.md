# 一. 伪类选择器
- 1. E:first-child  父元素中的第一个子元素
-  E:last-child  父元素中的最后一个元素
-  E:nth-child(number)  父元素中的第n个子元素
-  选择器：nth-child(even) 选择所有偶数
-  选择器：nth-child(odd) 选择所有奇数
-  选择器：nth-child(n) 全选  2n=偶数 2n+1=奇数 n+5=从第五个开始 -5+n=前五个
- 2.first-of-type指定类型的第一个 last-of-type指定类型的最后一个 nth-of-type(n)指定类型的第n个
- 不同：1会把所有子元素排序，再去看第一个子元素
       2先看元素，再排列顺序

# 二. 伪元素选择器
- 1. 语法 element::before() 
- ::before  在元素内部的前面插入内容
- ::after  在元素内部后面插入内容
-  注意： before, after 创建元素属于行内元素, 必须要有content属性
-        伪元素选择器和标签选择器一样，权重为1
