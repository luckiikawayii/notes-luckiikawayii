# scss
- 它在 CSS 语法的基础上增加了变量 (variables)、嵌套 (nested rules)、混合 (mixins)、继承(extend)、导入 (inline imports) 等高级功能

## 一. 变量

- 1.$ 符号来标识变量；把反复使用的css属性值定义成变量；
- 2. 如果变量需要镶嵌在字符串之中，就必须需要写在#{}之中
- 3. 当前样式表都可以使用

## 二. 嵌套

- 1. 在嵌套的代码块内，可以使用&引用父元素。比如a:hover伪类
- 2. 属性也可以嵌套，比如border-color属性，可以写成：
p {

    border: {   // 注意，border后面必须加上冒号。

        color: red;
    }

}

## 三. 继承

- 1. 继承是基于类class的（有时是基于其他类型的选择器）允许一个选择器，继承另一个选择器
- 2.class2要继承class1，就要使用@extend命令：
- eg. .class1 {
      border: 1px solid #ddd;}

      .class2 {
     @extend .class1;
     font-size:120%;

 }

## 四. 插入文件

- 1. Sass 拓展了 @import 的功能，允许其导入 SCSS 或 Sass 文件。被导入的文件将合并编译到同一个 CSS 文件中，另外，被导入的文件中所包含的变量或者混合指令 (mixin) 都可以在导入的文件中使用。
- 2.@import "foo.scss"; //都会导入文件 foo.scss
    @import "foo"; //都会导入文件 foo.scss
    @import "http://foo.com/bar";  // 插入外部文件
    @import "foo.css"; // 等同于css的import命令。

## 五. 样式导入

- 1. 通过样式导入可以把分散在多个sass文件中的内容合并生成到一个css文件，避免了项目中有大量的css文件通过原生的css @import带来的性能问题。

## 六.scss 注释

-  多行注释 - 这些使用 /**/ 写入。多行注释都保留在CSS输出。
   单行注释 - 这些是使用 // 跟着注释。单行注释不会保留在CSS输出。
