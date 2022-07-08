# 一. 问题
-   今天的问题都是案例里面的
- 1. 我案例里面加的图片没有显示，但是我感觉我的代码应该是对的
- 2. 为什么不能直接跟图片加居中的代码
- 3. 案例里面“搜索”字体没有加粗，我感觉我的代码也没有问题
- 4. 在style的.body里面的font后面为什么可以直接用16px这样的数据，直接用的话不应该要一一对应元素吗
-    可是我没有写这样的东西，它到哪里去对应
# 二. 内容
- 1. 字体大小  eg.font-size: 20px
-    字体粗细  eg.font-weight: 700   (400=normal  700=bold)
-    字体样式  eg.font-style: normal
-    字体     eg.font-family
-    连写     eg.font : 属性顺序
- 2. 文本属性
- 文本颜色: 预定义颜色值，十六进制(常用)，rgb代码
- 文本对齐：eg.

```

     div {
       text-align: center
         }
```

- 文本装饰：以上格式，中间换成text-decoration: none/underline(默认/下划线)
- 文本缩进：p {text-indent: 2em }(当前两个文字大小)
- 行间距：p {line-height: 20px}
- 3. 内部样式表：<style>标签里面    (结构样式分离，控制一个页面)
- 4. 行内样式表：在<body>里面直接选出要修饰的段落
-         eg.<p style="color: red; font-size: 20px>xxxxxxxx</p>    （部分结构样式分离，控制一个标签）
- 5. 外部样式表：建立后缀名css文件，再把css文件引入html页面中   （结构样式完全分离，控制多个页面）
-  语法<link rel="stylesheet" href="文件名“>        
