# 一. 问题
- 1.css和html是两门技术，为什么以css为后缀的文件打不开网页，
是不是因为css是建立在html上的  

# 二. 内容
- 1.css
- css设置html页面中文本内容，图片外形，版面布局外观样式
- css语法规范 在 `<title>`  `</title>` 标签里面
-          * 写前要加 `<style>`  `</style>`
-            即为选择器{给谁改样式 改什么样式}
-  eg. 紧凑格式 ` h1 { color: red; font-size: 15px; }`
-    *  展开格式  eg.

```
              h1 {
                 color: red; 一行一个属性
                font-size: 15px
              }
```

## css选择器 : 选择标签   基础选择器和复合选择器

-     * 基础选择器：
- 2. 标签选择器  一对多：以html标签名作为选择器  即为以上 eg
- 3. 类选择器（class选择器）：单独选择一个或多个标签  样式点定义，结构类(class)调用
-            不能用标签名
- eg. 

```
  <title>
      <style>
       .➕自定义名 {color: red}
      <style> 
  </title>
  <body>  
   <div class='red'>xxx</div>
  </body> 
```

-  多类名
在<style>标签里面建立多个类，在<body>的class里面添加多个元素
- 4.id选择器：只能用一次
- 格式

```
 <style>
   #red {
      color: red
      }
 </style>
 <body>
   <div id="red">xxx</div>
 </body>
```

- 5. 通配符选择器: 可以选择页面中所有元素
